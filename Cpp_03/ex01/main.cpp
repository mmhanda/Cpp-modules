/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:02:50 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/22 12:14:09 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("ClapTrap1");
    ClapTrap clap2 = clap1;
    ClapTrap clap3;
    clap3 = clap1;

    clap1.attack("target1");
    clap2.takeDamage(5);
    clap2.takeDamage(5);
    clap2.takeDamage(5);
    clap2.takeDamage(5);
    clap2.beRepaired(3);

    return (0);
}