/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:18:18 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/16 12:03:47 by mhanda           ###   ########.fr       */
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
        Zombie(){
            std::cout << "Zombie created" << std::endl;
        }
};

//  Zombie:: Zombie(/* args */)
// {
// }

//  Zombie::~ Zombie()
// {
// }



#endif