/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:20:24 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/27 12:38:37 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b1("Bob", 1);
    Bureaucrat b2("Sue", 10);
    Form f1("Form 1", 50, 100);
    Form f2("Form 2", 50, 50);
    Form f3("Form 3", 50, 10);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
    std::cout << f3 << std::endl;

    b1.incrementGrade();
    b2.decrementGrade();

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;

    try {
        b1.signForm(f1);
    }
    catch (Form::GradeTooLowException &e) {
        std::cout << b1.getName() << " couldn't sign " << f1.getName() << " because " << e.what() << std::endl;
    }

    try {
        b1.signForm(f2);
    }
    catch (Form::GradeTooLowException &e) {
        std::cout << b1.getName() << " couldn't sign " << f2.getName() << " because " << e.what() << std::endl;
    }

    try {
        b1.signForm(f3);
    }
    catch (Form::GradeTooLowException &e) {
        std::cout << b1.getName() << " couldn't sign " << f3.getName() << " because " << e.what() << std::endl;
    }

    try {
        b2.signForm(f1);
    }
    catch (Form::GradeTooLowException &e) {
        std::cout << b2.getName() << " couldn't sign " << f1.getName() << " because " << e.what() << std::endl;
    }

    try {
        b2.signForm(f2);
    }
    catch (Form::GradeTooLowException &e) {
        std::cout << b2.getName() << " couldn't sign " << f2.getName() << " because " << e.what() << std::endl;
    }

    try {
        b2.signForm(f3);
    }
    catch (Form::GradeTooLowException &e) {
        std::cout << b2.getName() << " couldn't sign " << f3.getName() << " because " << e.what() << std::endl;
    }
    return (0);
}