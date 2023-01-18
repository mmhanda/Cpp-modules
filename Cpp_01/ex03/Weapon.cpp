/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 06:00:04 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/18 11:54:29 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

const std::string Weapon::getType()
{
	const std::string &type_refer = this->type;

	return (type_refer);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string weapon)
{
	this->type = weapon;
}