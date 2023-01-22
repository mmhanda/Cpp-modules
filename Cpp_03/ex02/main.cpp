/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:02:50 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/22 19:05:33 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap scav1("FragTrap1");
    FragTrap scav2 = scav1;
    FragTrap scav3;
    scav3 = scav1;

    scav1.attack("target1");
    scav2.takeDamage(5000);
    scav3.beRepaired(3);
    scav3.highFivesGuys();

    return (0);
}