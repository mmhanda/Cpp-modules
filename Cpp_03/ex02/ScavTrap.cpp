/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:25:26 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/22 19:00:23 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->energy_points = 50;
    this->hit_points = 100;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
    this->name = name;
    this->energy_points = 50;
    this->hit_points = 100;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copyfrom)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copyfrom;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &copyfrom)
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

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap has entered Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}