/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:42:30 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/27 23:19:47 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
: name(""), signedform(false), gradeforsign(150), gradeforrxecute(150)
{
}

Form::Form(const std::string &name, const int &gradeforsign, const int &gradeforrxecute)
: name(name), gradeforsign(gradeforsign), gradeforrxecute(gradeforrxecute)
{
    std::cout << "Form Parametrized Constructor Called" << std::endl;
    if (gradeforsign < 1)
        throw GradeTooHighException();
    else if (gradeforsign > 150)
        throw GradeTooLowException();
    else if (gradeforrxecute < 1)
        throw GradeTooHighException();
    else if (gradeforrxecute > 150)
        throw GradeTooLowException();
    this->signedform = false;
}

Form::Form(const Form &copyfrom)
: name(copyfrom.name), gradeforsign(copyfrom.gradeforsign), gradeforrxecute(copyfrom.gradeforrxecute)
{
    *this = copyfrom;
}

Form & Form::operator = (const Form &copyfrom)
{
    this->signedform = copyfrom.signedform;
    return (*this);
}

std::string Form::getName()
{
    return (this->name);
}

bool Form::getSigned()
{
    return (this->signedform);
}

int Form::getGradeforsign()
{
    return (this->gradeforsign);
}

int Form::getGradeforrxecute()
{
    return (this->gradeforrxecute);
}

void Form::beSigned(Bureaucrat &bur)
{
    if (bur.getGrade() <= this->gradeforsign)
        this->signedform = true;
    else
        throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is low");
}

std::ostream &operator << (std::ostream &out, Form &form)
{
    out << "Form name: " << form.getName() << std::endl;
    out << "Form signed: " << form.getSigned() << std::endl;
    out << "Form grade for sign: " << form.getGradeforsign() << std::endl;
    out << "Form grade for execute: " << form.getGradeforrxecute() << std::endl;
    return (out);
}

Form::~Form()
{   
}