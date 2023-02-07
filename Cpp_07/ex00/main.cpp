/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:18:44 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/07 23:30:37 by mhanda           ###   ########.fr       */
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
    int a = 3;
    int s = 9;

    std::cout << "min " << min<int>(a, s) << std::endl;
    std::cout << "max " << max<int>(a, s) << std::endl;
    std::cout << a << " _ " << s << std::endl;
    swap<int>(a, s);
    std::cout << a  << " _ "  << s << std::endl;
    return (0);
}