/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:44:19 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/17 12:40:57 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;

    Zombie *zombies = new Zombie[N];

    while(i < N)
    {
        zombies[i].seter(name);
        zombies[i].announce();
        i ++;
    }
    return (zombies);
}
