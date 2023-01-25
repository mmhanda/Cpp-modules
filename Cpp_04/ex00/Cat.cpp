/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:56:06 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/25 21:12:41 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    return ;
}

Cat::Cat(const Cat &src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
    return ;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    return ;
}

Cat & Cat::operator = (const Cat &rhs)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "meow" << std::endl;
    return ;
}