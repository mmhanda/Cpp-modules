/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:18:44 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/07 23:32:45 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template <typename T>
void swap(T &data, T&data1)
{
    T temp;
    temp = data;
    data = data1;
    data1 = temp;
}

template <typename T>
T min(T &data, T&data1)
{
    if (data == data1){
        return (data);}
    if (data < data1)
        return (data);
    else
        return (data1);
}

template <typename T>
T max(T &data, T&data1)
{
    if (data == data1){
        return (data);}
    if (data > data1)
        return (data);
    else
        return (data1);
}

int main()
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return (0);
}