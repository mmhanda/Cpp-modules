/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:46:37 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/22 19:20:22 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap parameterized constructor called" << std::endl;
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &copyfrom)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = copyfrom;
}

FragTrap &FragTrap::operator = (const FragTrap &copyfrom)
{
    if (this != &copyfrom)
    {
        this->name = copyfrom.name;
        this->energy_points = copyfrom.energy_points;
        this->hit_points = copyfrom.hit_points;
        this->attack_damage = copyfrom.attack_damage;
    }
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name
    << " High fives all around!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}