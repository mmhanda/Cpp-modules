/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:32:34 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/15 04:42:50 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->_n = 0;
    this->_arr = NULL;
    this->_size = 0;
}

Span::Span(unsigned int n)
{
    this->_n = n;
    this->_arr = new int[n];
    this->_size = 0;
}

Span::Span(Span const & src)
{
    *this = src;
}

Span & Span::operator=(Span const & rhs)
{
    this->_n = rhs._n;
    this->_arr = rhs._arr;
    this->_size = rhs._size;
    return (*this);
}

void Span::addNumber(int n)
{
    if (this->_size == (int)this->_n)
        throw std::exception();
    this->_arr[this->_size] = n;
    this->_size++;
}

int Span::shortestSpan()
{
    int min = 0;
    int i = 0;
    int j = 0;
    int diff = 0;

    if (this->_size < 2)
        throw std::exception();
    min = this->_arr[0];
    while (i < this->_size)
    {
        j = i + 1;
        while (j < this->_size)
        {
            diff = this->_arr[i] - this->_arr[j];
            if (diff < 0)
                diff *= -1;
            if (diff < min)
                min = diff;
            j++;
        }
        i++;
    }
    return (min);
}

int Span::longestSpan()
{
    int max = 0;
    int i = 0;
    int j = 0;
    int diff = 0;

    if (this->_size < 2)
        throw std::exception();
    max = this->_arr[0];
    while (i < this->_size)
    {
        j = i + 1;
        while (j < this->_size)
        {
            diff = this->_arr[i] - this->_arr[j];
            if (diff < 0)
                diff *= -1;
            if (diff > max)
                max = diff;
            j++;
        }
        i++;
    }
    return (max);
}

Span::~Span()
{
    delete [] this->_arr;
}