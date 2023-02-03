/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 05:12:11 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/03 09:28:55 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


Converter::Converter()
{
    this->str = "";
    this->type = INVALID;
    this->_char = 0;
    this->_int = 0;
    this->_float = 0;
    this->_double = 0;
}

Converter::Converter(std::string str)
{
    this->str = str;
    this->type = INVALID;
    this->_char = 0;
    this->_int = 0;
    this->_float = 0;
    this->_double = 0;
}

Converter::Converter(Converter const & src)
{
    *this = src;
}

Converter & Converter::operator = (Converter const & rhs)
{
    if (this != &rhs)
    {
        this->str = rhs.str;
        this->type = rhs.type;
        this->_char = rhs._char;
        this->_int = rhs._int;
        this->_float = rhs._float;
        this->_double = rhs._double;
    }
    return *this;
}

template <typename T>
bool is_nan(T value)
{
    if (value == std::numeric_limits<T>::infinity()) {
        return true;
    } else if (value == -std::numeric_limits<T>::infinity()) {
        return true;
    } else if (value != value) {
        return true;
    }
    return false;
}

Type Converter::getType(const std::string &type)
{
    int length = type.length();
    if (length == 1 && !isdigit(type[0]))
    {
        std::cout << "CHAR" << std::endl;
        return CHAR;
    }
    
    char is_char = type[length - 1];
    if (is_char == 'f')
    {
        std::cout << "FLOAT" << std::endl;
        return FLOAT;
    }

    char *last;
    std::strtod(type.c_str(), &last);
    if (*last == '\0')
    {
        std::cout << "DOUBLE" << std::endl;
        return DOUBLE;
    }

    char *last2;
    std::strtol(type.c_str(), &last2, 10);
    if (*last2 == '\0')
    {
        std::cout << "INT" << std::endl;
        return INT;
    }

    return INVALID;
}

bool isdisplayable(char c)
{
    return (isprint(c) != 0);
}

void Converter::convert(Type type)
{
    this->type = type;
    switch (type)
    {
        case CHAR:
            this->_char = this->str[0];
            this->_int = static_cast<int>(this->_char);
            this->_float = static_cast<float>(this->_char);
            this->_double = static_cast<double>(this->_char);
            break;
        case INT:
            this->_int = std::stoi(this->str);
            this->_char = static_cast<char>(this->_int);
            this->_float = static_cast<float>(this->_int);
            this->_double = static_cast<double>(this->_int);
            break;
        case FLOAT:
            this->_float = std::stof(this->str);
            this->_char = static_cast<char>(this->_float);
            this->_int = static_cast<int>(this->_float);
            this->_double = static_cast<double>(this->_float);
            break;
        case DOUBLE:
            this->_double = std::stod(this->str);
            this->_char = static_cast<char>(this->_double);
            this->_int = static_cast<int>(this->_double);
            this->_float = static_cast<float>(this->_double);
            break;
        default:
            break;
    }
}

void Converter::print_literal()
{
    std::cout << "char: ";
    if (this->type == INVALID || is_nan(this->_float) || is_nan(this->_double))
        std::cout << "impossible" << std::endl;
    else if (!isdisplayable(this->_char))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << this->_char << "'" << std::endl;
    
    std::cout << "int: ";
    if (this->type == INVALID || is_nan(this->_float) || is_nan(this->_double))
        std::cout << "impossible" << std::endl;
    else
        std::cout << this->_int << std::endl;
    
    std::cout << "float: ";
    if (this->type == INVALID)
        std::cout << "impossible" << std::endl;
    else {
        float f = this->_float;
        int i = (int)f;
        if (f - i == 0)
            std::cout << i << ".0f" << std::endl;
        else
            std::cout << f << "f" << std::endl;
    }

    std::cout << "double: ";
    if (this->type == INVALID)
        std::cout << "impossible" << std::endl;
    else {
        double d = this->_double;
        int i = (int)d;
        if (d - i == 0)
            std::cout << i << ".0" << std::endl;
        else
            std::cout << d << std::endl;
    }
}

Converter::~Converter()
{
}

// std::ostream & operator << (std::ostream & o, Converter const & rhs)
// {
//     // o << hi << std::endl;
//     return o;
// }