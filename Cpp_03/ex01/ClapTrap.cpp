/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:03:31 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/22 12:15:58 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap ()
{
    std::cout << "ClapTrap Constructor called" << std::endl;
    this->energy_points = 10;
    this->hit_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap (std::string name)
{
    std::cout << "parameterized ClapTrap Constructor called" << std::endl;
    this->name = name;
    this->energy_points = 10;
    this->hit_points = 10;
    this->attack_damage = 0;
}

ClapTrap::~ClapTrap ()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClaTrap " << this->name << " attacks " << target
    << ", causing " << this->attack_damage << " points of damage!" << std::endl;
    this->hit_points -= this->attack_damage;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " takes " << amount
    << " points of damage!" << std::endl;
    this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name
    << " is repaired by " << amount << " points!" << std::endl;
    this->hit_points += amount;
}

ClapTrap::ClapTrap (const ClapTrap &copyfrom)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    this->name = copyfrom.name;
    this->hit_points = copyfrom.hit_points;
    this->energy_points = copyfrom.energy_points;
    this->attack_damage = copyfrom.attack_damage;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &copyfrom)
{
    std::cout << "ClapTrap Assignment Operator called" << std::endl;
    if (this != &copyfrom)
    {
        this->name = copyfrom.name;
        this->hit_points = copyfrom.hit_points;
        this->energy_points = copyfrom.energy_points;
        this->attack_damage = copyfrom.attack_damage;
    }
    return (*this);
}