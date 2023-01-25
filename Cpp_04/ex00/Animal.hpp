/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:55:20 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/25 22:38:49 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal const & src);
        Animal & operator=(Animal const & rhs);
        std::string getType(void) const;
        virtual void makeSound(void) const;
        ~Animal();
};

#endif