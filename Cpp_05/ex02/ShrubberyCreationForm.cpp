/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:43:05 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/28 05:33:46 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm("ShrubberyCreationForm", 145, 137)
{
    *this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
    if (this != &rhs)
        this->target = rhs.target;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getGradeforrxecute())
        throw AForm::GradeTooLowException();
    std::ofstream file;
    file.open(this->target + "_shrubbery");
    file << "          v" << std::endl;
    file << "         >X<" << std::endl;
    file << "          A" << std::endl;
    file << "         d$b" << std::endl;
    file << "        d$$b" << std::endl;
    file << "       d$$$b" << std::endl;
    file << "      d$$$$$b" << std::endl;
    file << "     d$$$$$$$b" << std::endl;
    file << "    d$$$$$$$$$b" << std::endl;
    file << "   d$$$$$$$$$$$b" << std::endl;
    file << "  d$$$$$$$$$$$$$b" << std::endl;
    file << " d$$$$$$$$$$$$$$$b" << std::endl;
    file << "d$$$$$$$$$$$$$$$$$b" << std::endl;
    file << "       ###" << std::endl;
    file << "       ###" << std::endl;
    file << "       ###" << std::endl;
    file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}