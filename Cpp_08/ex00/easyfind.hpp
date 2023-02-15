/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 05:53:37 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/15 04:27:09 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int easyfind(T &container, int value)
{
    typename T::iterator it = std::find(
        container.begin(), container.end(), value);
    if (it == container.end())
        throw std::exception();
    return value;
}

#endif