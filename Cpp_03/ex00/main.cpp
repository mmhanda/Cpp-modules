/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:02:50 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/22 18:11:25 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("ClapTrap1");

    clap1.attack("target1");
    clap1.attack("target1");
    clap1.takeDamage(11);
    clap1.beRepaired(5);
    clap1.takeDamage(5);
    clap1.beRepaired(10);

    return (0);
}