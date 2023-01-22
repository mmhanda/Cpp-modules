/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:02:50 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/22 16:34:58 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav1("ScavTrap1");
    ScavTrap scav2 = scav1;
    ScavTrap scav3;
    scav3 = scav1;

    scav1.attack("target1");
    scav2.takeDamage(5);
    scav3.beRepaired(3);
    scav3.guardGate();

    return (0);
}