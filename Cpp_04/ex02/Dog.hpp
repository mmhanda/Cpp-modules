/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:55:41 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/26 01:17:09 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *_Brain;
    public :
        Dog();
        Dog(Dog const & src);
        Dog & operator=(Dog const & rhs);
        void makeSound(void) const;
        ~Dog();
};

#endif