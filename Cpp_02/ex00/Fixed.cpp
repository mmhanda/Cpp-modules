/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:41:46 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/20 01:35:01 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << '\n';
    return (fixedPointvalue);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << '\n';
    fixedPointvalue = raw;
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << '\n';
    fixedPointvalue = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << '\n;
}