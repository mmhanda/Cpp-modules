/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:55:28 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/26 05:14:28 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
    std::cout << "Animal constructor called" << std::endl;
    return ;
}

Animal::Animal(const Animal & src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
    return ;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

Animal & Animal::operator=(const Animal & rhs)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &rhs)
    this->type = rhs.type;
    return *this;
}

std::string Animal::getType(void) const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes sound" << std::endl;
}