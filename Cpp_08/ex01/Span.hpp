/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:31:08 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/15 06:57:04 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class Span
{
    private:
        unsigned int n;
        int *tab;
        int counter;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const & src);
        Span & operator=(Span const & rhs);
        void addNumber(int n);
        void addNumber(int start, int end);
        int shortestSpan();
        int longestSpan();
        ~Span();
};

#endif