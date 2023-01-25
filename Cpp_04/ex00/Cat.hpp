/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 02:55:58 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/25 20:10:37 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(const Cat &src);
        Cat & operator = (Cat const &rhs);
        std::string getType() const;
        void makeSound() const;
        ~Cat();
};

#endif