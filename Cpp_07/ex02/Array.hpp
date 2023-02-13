/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 03:30:39 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/13 05:01:19 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        int len;
        T *tab;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &copyfrom);
        Array &operator=(Array const & copyfrom);
        T &operator[](int i);
        int size() const;
        ~Array();
};

#endif