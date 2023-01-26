/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:56:06 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/25 23:02:58 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
    return ;
}

WrongCat::WrongCat(const WrongCat &src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
    return ;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}

WrongCat & WrongCat::operator = (const WrongCat &rhs)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "meow" << std::endl;
    return ;
}