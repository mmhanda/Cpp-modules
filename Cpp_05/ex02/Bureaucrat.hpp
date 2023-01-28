/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:20:51 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/28 01:39:45 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
class AForm;

class Bureaucrat
{
    private :
        const std::string name;
        int grade;
    public :
        Bureaucrat();
        Bureaucrat(const std::string &name, const int &grade);
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator = (const Bureaucrat &src);
        std::string getName();
        int getGrade();
        void incrementGrade();
        void decrementGrade();
        void signForm(AForm &form);
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
        ~Bureaucrat();
};

std::ostream &operator << (std::ostream &out, Bureaucrat &bur);

#endif