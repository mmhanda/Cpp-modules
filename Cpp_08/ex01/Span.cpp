/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:32:34 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/15 06:58:00 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->n = 0;
    this->tab = NULL;
    this->counter = 0;
}

Span::Span(unsigned int n)
{
    this->n = n;
    this->tab = new int[n];
    this->counter = 0;
}

Span::Span(Span const & src)
{
    *this = src;
}

Span & Span::operator=(Span const & rhs)
{
    this->n = rhs.n;
    this->tab = rhs.tab;
    this->counter = rhs.counter;
    return (*this);
}

void Span::addNumber(int n)
{
    if (this->counter == (int)this->n)
        throw std::exception();
    this->tab[this->counter] = n;
    this->counter++;
}

void Span::addNumber(int start, int end)
{
    if (end < start) {
        throw std::invalid_argument("Invalid range: end is less than start.");
    }

    int count = end - start + 1;
    if (this->counter + count > (int)this->n) {
        throw std::length_error("Container is already full.");
    }

    for (int i = start; i <= end; ++i) {
        this->tab[this->counter] = i;
        ++this->counter;
    }
}

int Span::shortestSpan()
{
    int min = 0;
    int i = 0;
    int j = 0;
    int diff = 0;

    if (this->counter < 2)
        throw std::exception();
    min = this->tab[0];
    while (i < this->counter)
    {
        j = i + 1;
        while (j < this->counter)
        {
            diff = this->tab[i] - this->tab[j];
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

    if (this->counter < 2)
        throw std::exception();
    max = this->tab[0];
    while (i < this->counter)
    {
        j = i + 1;
        while (j < this->counter)
        {
            diff = this->tab[i] - this->tab[j];
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
    delete[] this->tab;
}