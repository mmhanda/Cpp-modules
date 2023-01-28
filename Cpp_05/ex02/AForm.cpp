/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:42:30 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/28 05:27:24 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
: name(""), signedform(false), gradeforsign(150), gradeforrxecute(150)
{
    std::cout << "AForm Default Constructor Called" << std::endl;
}

AForm::AForm(const std::string &name, const int &gradeforsign, const int &gradeforrxecute)
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

AForm::AForm(const AForm &copyfrom)
: name(copyfrom.name), gradeforsign(copyfrom.gradeforsign), gradeforrxecute(copyfrom.gradeforrxecute)
{
    std::cout << "AForm Copy Constructor Called" << std::endl;
    *this = copyfrom;
}

AForm & AForm::operator = (const AForm &copyfrom)
{
    std::cout << "AForm Assignment Operator Called" << std::endl;
    this->signedform = copyfrom.signedform;
    return (*this);
}

std::string AForm::getName()
{
    return (this->name);
}

bool AForm::getSigned() const
{
    return (this->signedform);
}

int AForm::getGradeforsign() const
{
    return (this->gradeforsign);
}

int AForm::getGradeforrxecute() const
{
    return (this->gradeforrxecute);
}

void AForm::beSigned(Bureaucrat &bur)
{
    if (bur.getGrade() <= this->gradeforsign)
        this->signedform = true;
    else
        throw GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is low");
}

std::ostream &operator << (std::ostream &out, AForm &form)
{
    out << "Form name: " << form.getName() << std::endl;
    out << "Form signed: " << form.getSigned() << std::endl;
    out << "Form grade for sign: " << form.getGradeforsign() << std::endl;
    out << "Form grade for execute: " << form.getGradeforrxecute() << std::endl;
    return (out);
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return ("Form is not signed");
}

AForm::~AForm()
{
    std::cout << "Form Destructor Called" << std::endl;
}