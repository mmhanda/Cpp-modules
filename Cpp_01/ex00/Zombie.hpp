/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:18:18 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/17 04:21:56 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class  Zombie
{
    private:
        std::string name;
    public:
        void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
//  Zombie:: Zombie(/* args */)
// {
// }

//  Zombie::~ Zombie()
// {
// }



#endif