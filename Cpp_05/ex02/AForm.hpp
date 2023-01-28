/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:42:10 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/28 01:36:48 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class AForm
{
    private :
        const std::string name;
        bool signedform;
        const int gradeforsign;
        const int gradeforrxecute;
    public :
        AForm();
        AForm(const std::string &name, const int &gradeforsign, const int &gradeforrxecute);
        AForm(const AForm &copyfrom);
        AForm &operator = (const AForm &copyfrom);
        std::string getName();
        bool getSigned();
        int getGradeforsign();
        int getGradeforrxecute();
        void beSigned(Bureaucrat &bur);
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public :
                const char* what() const throw();
        };
        ~AForm();
};

std::ostream &operator << (std::ostream &out, AForm &form);

#endif