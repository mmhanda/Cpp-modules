/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:03:31 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/22 18:06:21 by mhanda           ###   ########.fr       */
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
    if (this->energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->name
        << " does not have enough energy to attack!" << std::endl;
        return ;
    }
    std::cout << "ClaTrap " << this->name << " attacks " << target
    << ", causing " << this->attack_damage << " points of damage!" << std::endl;
    this->energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points <= (int)amount)
    {
        std::cout << "ClapTrap " << this->name
        << " does not have enough hit points to take damage!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " takes " << amount
    << " points of damage!" << std::endl;
    this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->name
        << " does not have enough energy to repair!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name
    << " is repaired by " << amount << " points!" << std::endl;
    this->hit_points += amount;
    this->energy_points -= 1;
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