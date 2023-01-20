/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:41:29 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/20 01:33:55 by mhanda           ###   ########.fr       */
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
        Fixed(Fixed copy);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
}

#endif