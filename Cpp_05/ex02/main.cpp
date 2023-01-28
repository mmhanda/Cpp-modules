/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:20:24 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/28 05:34:53 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat bur("Bob", 5);
        RobotomyRequestForm rrf("Home");
        ShrubberyCreationForm pp("car");
        PresidentialPardonForm pre("building");
        bur.signForm(rrf);
        bur.signForm(pp);
        bur.signForm(pre);
        rrf.execute(bur);
        pp.execute(bur);
        pre.execute(bur);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}