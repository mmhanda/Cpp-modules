/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 05:50:31 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/28 06:41:28 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Default Constructor Called" << std::endl;
}

Intern::Intern(const Intern &copyfrom)
{
    std::cout << "Intern Copy Constructor Called" << std::endl;
    *this = copyfrom;
}

Intern & Intern::operator = (const Intern &copyfrom)
{
    std::cout << "Intern Assignment Operator Called" << std::endl;
    (void)copyfrom;
    return (*this);
}

AForm *Intern::makeForm(std::string what_form, std::string target)
{
    int formType;
    if (what_form == "robotomy request") formType = 1;
    else if (what_form == "shrubbery creation") formType = 2;
    else if (what_form == "presidential pardon") formType = 3;
    else formType = 0;
    AForm *form;
    switch (formType) {
        case 1:
            std::cout << "Intern creates " << what_form << std::endl;
            form = new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates " << what_form << std::endl;
            form = new ShrubberyCreationForm(target);
        case 3:
            std::cout << "Intern creates " << what_form << std::endl;
            form = new PresidentialPardonForm(target);
        default:
            std::cout << what_form << " form doesn't exist." << std::endl;
            return NULL;
    }
    std::cout << "Intern creates " << form->getName() << std::endl;
    return form;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor Called" << std::endl;
}