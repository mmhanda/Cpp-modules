/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:17:48 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/17 11:41:09 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    randomChump("zombie1");
    Zombie *zombie2 = newZombie("zombie2");
    delete zombie2;
    return 0;
}
