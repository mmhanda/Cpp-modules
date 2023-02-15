/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 05:53:10 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/15 04:29:24 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(12);
        v.push_back(13);
        v.push_back(14);
        v.push_back(16);
        v.push_back(17);
        v.push_back(15);
        easyfind(v, 17);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        exit(1);
    }
    std::cout << "done" << std::endl;
    return(0);
}