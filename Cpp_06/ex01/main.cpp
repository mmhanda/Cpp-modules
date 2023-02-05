/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:22:21 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/05 21:05:32 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"
#include "Data.hpp"

int main()
{
    std::cout << "Test 1:" << std::endl;

    Data data;
    Serializer serializer;
    data.sum = 1337;

    uintptr_t serialized = serializer.serialize(&data);
    Data* deserialized = serializer.deserialize(serialized);
    
    std::cout << "Original sum: " << data.sum << std::endl;
    std::cout << "Original addr sum: " << &data.sum << std::endl;
    std::cout << "Deserialized sum: " << deserialized->sum << std::endl;
    std::cout << "Deserialized addr sum: " << &deserialized->sum << std::endl;
    
    std::cout << "Test 2:" << std::endl;
    
    Data data1;
    Serializer serializer1;

    data1.sum = 42;
    std::cout << "Original sum: " << data1.sum << std::endl;
    std::cout << "data1 addr is: " << &data1 << std::endl;
    uintptr_t uni = serializer1.serialize(&data1);
    Data* deserialized1 = serializer1.deserialize(uni);
    std::cout << "deserialized1 sum: " << deserialized1->sum << std::endl;
    std::cout << "the value of the deserialized1 is: " << deserialized1 << std::endl;

    return 0;
}