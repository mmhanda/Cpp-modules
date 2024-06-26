/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:18:18 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/17 11:27:16 by mhanda           ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif