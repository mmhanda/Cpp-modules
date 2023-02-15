/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:31:08 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/15 04:41:36 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class Span
{
    private:
        unsigned int _n;
        int *_arr;
        int _size;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const & src);
        Span & operator=(Span const & rhs);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        ~Span();
};

#endif