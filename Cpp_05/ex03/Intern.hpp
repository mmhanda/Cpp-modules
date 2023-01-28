/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 05:50:09 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/28 06:36:24 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class Intern
{
    public:
        Intern();
        Intern(const Intern &copyfrom);
        Intern &operator = (const Intern &copyfrom);
        AForm *makeForm(std::string what_form, std::string target);
        ~Intern();
};

#endif