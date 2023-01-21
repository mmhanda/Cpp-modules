/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:41:29 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/21 06:08:02 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixedPointvalue;
        static const int farctionalbits = 8;
    public:
        Fixed();
        Fixed(int value);
        Fixed (float value);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed(Fixed const &copy);
        Fixed &operator = (Fixed const &copyfrom);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
};

std::ostream &operator << (std::ostream &out, const Fixed &copyfrom);

#endif