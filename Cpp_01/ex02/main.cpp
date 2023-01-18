/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:00:06 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/18 05:11:30 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int main()
{
    std::string var = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &var;
    std::string &stringREF = var;
    
    std::cout << "The memory address of the string variable is: " << &var << "\n";
    std::cout << "The memory address held by stringPTR is: " << stringPTR << "\n";
    std::cout << "The memory address held by stringREF is: " << &stringREF << "\n";
    
    std::cout << "The value of the string variable is: " << var << "\n";
    std::cout << "The value pointed to by stringPTR is: " << *stringPTR << "\n";
    std::cout << "The value pointed to by stringREF is: " << stringREF << "\n";
}
