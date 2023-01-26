/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:24:45 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/26 01:28:45 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor Called" << std::endl;
    return ;
}

Brain::Brain(const Brain &src)
{
    std::cout << "Brain Copy Constructor Called" << std::endl;
    *this = src;
    return ;
}

Brain &Brain::operator = (const Brain &src)
{
    std::cout << "Brain Copy assignation operator Called" << std::endl;
    if (this != &src)
    {
        unsigned long i = 0;
        while (i < src.ideas->size())
        {
            this->ideas[i] = src.ideas[i];
            i ++;
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
    return ;
}