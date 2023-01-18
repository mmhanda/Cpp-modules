/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:44:19 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/18 09:35:07 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    if (N < 1)
        return NULL;
    Zombie *zombies = new Zombie[N];

    while(i < N)
    {
        zombies[i].seter(name);
        zombies[i].announce();
        i ++;
    }
    return (zombies);
}
