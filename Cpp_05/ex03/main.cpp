/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:20:24 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/28 06:39:13 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm* scf;
    scf = someRandomIntern.makeForm("shrubbery creation", "Pine Tree Forest");
    AForm* ppf;
    ppf = someRandomIntern.makeForm("presidential pardon", "John Doe");
    AForm* invalid;
    invalid = someRandomIntern.makeForm("invalid form", "Invalid Target");
    
    return (0);
}