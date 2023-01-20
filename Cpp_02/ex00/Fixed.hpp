/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:41:29 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/20 10:54:42 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixedPointvalue;
        static const int farctionalbits = 8;
    public:
        Fixed();
        Fixed &operator = (Fixed const &copyfrom);
        Fixed(Fixed const &copy);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
};

#endif