/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 05:12:24 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/05 15:20:31 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <cfloat>
#include <climits>
#include <limits>
#include <cstdlib>

enum Type {CHAR, INT, FLOAT, DOUBLE, INVALID};

class Converter
{
    private:
        std::string str;
        Type        type;
        char        _char;
        int         _int;
        float       _float;
        double      _double;
    public:
        Converter();
        Converter(std::string str);
        void convert(Type type);
        void print_literal();
        Type   getType(const std::string &type);
        Converter(Converter const & src);
        Converter & operator=(Converter const & rhs);
        ~Converter();
};

bool isdisplayable(char c);

#endif