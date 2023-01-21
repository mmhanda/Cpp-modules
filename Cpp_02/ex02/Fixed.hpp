/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:41:29 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/21 19:35:28 by mhanda           ###   ########.fr       */
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
        bool operator > (Fixed const &copyfrom);
        bool operator < (Fixed const &copyfrom);
        bool operator != (Fixed const &copyfrom);
        bool operator == (Fixed const &copyfrom);
        bool operator <= (Fixed const &copyfrom) const;
        bool operator >= (Fixed const &copyfrom) const;
        Fixed operator ++ (int);
        Fixed &operator ++ ();
        Fixed operator * (Fixed const &copyfrom);
        Fixed operator / (Fixed const &copyfrom);
        Fixed operator + (Fixed const &copyfrom);
        Fixed operator - (Fixed const &copyfrom);
        Fixed operator -- (int);
        Fixed &operator -- ();
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed &max(Fixed const &a, Fixed const &b);
        static Fixed &min(Fixed const &a, Fixed const &b);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
};

std::ostream &operator << (std::ostream &out, const Fixed &copyfrom);

#endif