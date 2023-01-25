/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:55:48 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/25 22:32:32 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    return ;
}

Dog::Dog(const Dog & src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    return ;
}

Dog & Dog::operator=(const Dog & rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "bark" << std::endl;
    return ;
}
