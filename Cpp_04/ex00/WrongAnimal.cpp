/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:55:28 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/25 21:06:30 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
    return ;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
    return ;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & rhs)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Animal makes sound" << std::endl;
}