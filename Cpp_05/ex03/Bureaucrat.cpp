/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:21:00 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/28 04:58:31 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat Default Constructor Called" << std::endl;
    this->grade = 0;
    return ;
}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade)
: name(name), grade(grade)
{
    std::cout << "Bureaucrat Parametrized Constructor Called" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = src;
    return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    std::cout << "Copy assignation operator Called" << std::endl;
    if(this != &src)
        this->grade = src.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor Called" << std::endl;
    return ;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is low";
}

std::string Bureaucrat::getName()
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->grade - 1 < 1)
        throw GradeTooHighException();
    else
        this->grade -= 1;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
    else
        this->grade += 1;
}

std::ostream &operator << (std::ostream &out, Bureaucrat &bur)
{
    out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
    return (out);
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << this->name << " couldn't sign " <<
        form.getName() << " the reason is " << e.what() << std::endl;
    }
}