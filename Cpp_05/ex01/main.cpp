/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:20:24 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/27 10:39:41 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
     try
    {
        Bureaucrat b("John Doe", 1);
        b.incrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b("Jane Doe", 200);
        b.decrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b("John Doe", 1);
        std::cout << b ;
        b.decrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}