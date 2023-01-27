/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:20:24 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/28 00:51:58 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        // Test Bureaucrat constructor and exception handling
        Bureaucrat bur1("joe", 1);
        // Bureaucrat bur2("jim", 0);
        // Bureaucrat bur3("jane", 151);
        // std::cout << bur1 << std::endl;
        
        // Test incrementGrade() and exception handling
        // bur1.incrementGrade();
        // bur1.decrementGrade();
        // std::cout << bur1 << std::endl;

        // Test decrementGrade() and exception handling
        // bur1.decrementGrade();
        // bur1.decrementGrade();
        // std::cout << bur1 << std::endl;

        // Test Form constructor and exception handling
        Form from1("watiqa", 5, 1);
        // Form from2("application", 1, 10);
        // Form from3("contract", 15, 150);
        // std::cout << from1 << std::endl;

        // Test beSigned() and exception handling
        bur1.signForm(from1);
        // from1.beSigned(bur1);
        // std::cout << from1 << std::endl;
        // from1.beSigned(bur2);
        // std::cout << from1 << std::endl;

        // Test signForm()
        bur1.signForm(from1);
        std::cout << from1 << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}