/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:22:44 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/05 21:00:27 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

Serializer::Serializer()
{
    return ;
}

Serializer::Serializer(Serializer const &copyform)
{
    *this = copyform;
    return ;
}

Serializer &Serializer::operator=(Serializer const &copyfrom)
{
    (void)copyfrom;
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

Serializer::~Serializer()
{
    return ;
}