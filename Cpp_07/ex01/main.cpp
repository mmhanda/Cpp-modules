/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:34:50 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/13 03:27:30 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void func(T &data)
{
    std::cout << data << std::endl;
}

template <typename T>
void iter(T* ptr, size_t length, void (*func)(T&))
{
    while (length)
    {
        func(*ptr);
        length --;
        ptr ++;
    }
}

int main()
{
    int int_array[] = {1, 2, 3, 4, 5};
    std::string str_array[] = {"apple", "banana", "cherry", "date"};
    std::cout << "int array: \n";
    iter(int_array, 5, func<int>);
    std::cout << "string array: \n";
    iter(str_array, 4, func<std::string>);

    return (0);
}
