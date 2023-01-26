/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:10:03 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/26 03:05:01 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // delete j;
    // delete i;
    // Animal *anim = Animal[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    Animal  *anim[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

    for (size_t i = 0; i < 4; i++)
    {
        delete anim[i];
    }

    return 0;
}