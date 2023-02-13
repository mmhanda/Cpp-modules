/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 03:30:11 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/13 05:44:09 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> empty(100);
    std::cout << "empty.size() = " << empty.size() << std::endl;
    Array<int> nums(5);
    std::cout << "nums.size() = " << nums.size() << std::endl;
    for (int i = 0; i < nums.size(); i++) {
        std::cout << "nums[" << i << "] = " << nums[i] << std::endl;
    }
    Array<int> nums_copy = nums;
    nums_copy[0] = 10;
    std::cout << "nums_copy[0] = " << nums_copy[0] << ", nums[0] = " << nums[0] << std::endl;
    try {
        empty[0] = 1;
    } catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    try{
        std::string str[6] = {"Hello", "World", "I", "am", "a", "string"};
        Array<std::string> strr(6);
        strr[3] = str[2];
        std::cout << strr[0] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return (0);
}