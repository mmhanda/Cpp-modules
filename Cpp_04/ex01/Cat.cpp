/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:56:06 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/26 05:09:45 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->_Brain = new Brain();
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
    delete this->_Brain;
    std::cout << "Cat Destructor called" << std::endl;
    return ;
}

Cat & Cat::operator = (const Cat &rhs)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_Brain = new Brain(*rhs._Brain);
        this->type = rhs.type;
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "meow" << std::endl;
    return ;
}