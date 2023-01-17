/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:44:04 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/17 12:23:30 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void Zombie::seter(std::string name)
{
    this->zombi_name = name;
}

void Zombie::announce()
{
    std::cout << this->zombi_name << ": Braiiiiiiinnzzz..." << std::endl;
}
