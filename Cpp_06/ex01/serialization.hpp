/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:21:57 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/05 20:24:55 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include "Data.hpp"
#include <iostream>
#include <cstdint>

class Serializer 
{
    public :
        Serializer();
        Serializer(Serializer const &copyform);
        Serializer &operator=(Serializer const &copyfrom);
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
        ~Serializer();
};

#endif