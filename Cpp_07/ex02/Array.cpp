/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 04:21:18 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/13 05:32:30 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    this->len = 0;
    this->tab = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->len = n;
    this->tab = new T[n];
}

template <typename T>
Array<T>::Array(Array const &copyfrom)
{
    this->len = copyfrom.len;
    this->tab = new T[copyfrom.len];
    for (int i = 0; i < copyfrom.len; i++)
        this->tab[i] = copyfrom.tab[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &copyfrom)
{
    if (this != &copyfrom)
    {
        this->len = copyfrom.len;
        this->tab = new T[copyfrom.len];
        for (int i = 0; i < copyfrom.len; i++)
            this->tab[i] = copyfrom.tab[i];
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](int i)
{
    if (i < 0 || i >= this->len)
        throw std::exception();
    return (this->tab[i]);
}

template <typename T>
int Array<T>::size() const
{
    return (this->len);
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->tab;
}

template class Array<int>;
template class Array<double>;
template class Array<float>;
template class Array<std::string>;