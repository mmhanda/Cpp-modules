/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:42:10 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/27 12:25:46 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
    private :
        const std::string name;
        bool signedform;
        const int gradeforsign;
        const int gradeforrxecute;
    public :
        Form();
        Form(const std::string &name, const int &gradeforsign, const int &gradeforrxecute);
        Form(const Form &copyfrom);
        Form &operator = (const Form &copyfrom);
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
        ~Form();
};

std::ostream &operator << (std::ostream &out, Form &form);

#endif