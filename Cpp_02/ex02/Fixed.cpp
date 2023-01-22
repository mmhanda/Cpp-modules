/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:41:46 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/22 15:55:00 by mhanda           ###   ########.fr       */
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
    std::cout << "Destructor called" << '\n';
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << '\n';
        *this = copy;
    return (*this);
}

Fixed &Fixed::operator = (Fixed const &copyfrom)
{
    std::cout << "Copy assignment operator called" << '\n';
    if (this != &copyfrom)
        this->fixedPointvalue = copyfrom.fixedPointvalue;
    return (*this);
}

float Fixed::toFloat( void ) const
{
    return ( (float)fixedPointvalue / (1 << farctionalbits));
}

int Fixed::toInt( void ) const
{
    return (fixedPointvalue >> farctionalbits);
}

Fixed::Fixed(int value)
{
    std::cout << "Int constructor called" << '\n';
    this->fixedPointvalue = value << farctionalbits;
}

Fixed::Fixed(float value)
{
    std::cout << "Float constructor called" << '\n';
    this->fixedPointvalue = roundf(value * (1 << farctionalbits));
}

std::ostream &operator << (std::ostream &out, const Fixed &copyfrom)
{
    out << copyfrom.toFloat();
    return (out);
}

bool Fixed::operator > (Fixed const &copyfrom)
{
    if (this->fixedPointvalue > copyfrom.fixedPointvalue)
        return (true);
    return (false);
}

bool Fixed::operator < (Fixed const &copyfrom)
{
    if (this->fixedPointvalue < copyfrom.fixedPointvalue)
        return (true);
    return (false);
}

bool Fixed::operator >= (Fixed const &copyfrom) const
{
    if (this->fixedPointvalue >= copyfrom.fixedPointvalue)
        return (true);
    return (false);
}

bool Fixed::operator <= (Fixed const &copyfrom) const
{
    if (this->fixedPointvalue <= copyfrom.fixedPointvalue)
        return (true);
    return (false);
}

bool Fixed::operator == (Fixed const &copyfrom)
{
    if (this->fixedPointvalue == copyfrom.fixedPointvalue)
        return (true);
    return (false);
}

bool Fixed::operator != (Fixed const &copyfrom)
{
    if (this->fixedPointvalue != copyfrom.fixedPointvalue)
        return (true);
    return (false);
}

Fixed Fixed::operator ++ (int)
{
    Fixed temp(*this);
    temp.fixedPointvalue++;
    return (temp);
}

Fixed &Fixed::operator ++ ()
{
    this->fixedPointvalue ++;
    return (*this);
}

Fixed Fixed::operator * (Fixed const &copyfrom)
{
    return (this->toFloat() * copyfrom.toFloat());
}

Fixed Fixed::operator / (Fixed const &copyfrom)
{
    return (this->toFloat() / copyfrom.toFloat());
}

Fixed Fixed::operator + (Fixed const &copyfrom)
{
    return (this->toFloat() + copyfrom.toFloat());
}

Fixed Fixed::operator - (Fixed const &copyfrom)
{
    return (this->toFloat() - copyfrom.toFloat());
}

Fixed &Fixed::operator -- ()
{
    this->fixedPointvalue --;
    return (*this);
}

Fixed Fixed::operator -- (int)
{
    Fixed temp(*this);
    temp.fixedPointvalue--;
    return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a >= b ? b : a; 
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a >= b ? a : b;
}

Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    return a >= b ? const_cast<Fixed &>(b) : const_cast<Fixed &>(a);
}

Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    return a >= b ? const_cast<Fixed &>(a) : const_cast<Fixed &>(b);
}