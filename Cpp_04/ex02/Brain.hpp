/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:18:44 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/25 23:37:20 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(const Brain &src);
        Brain & operator = (const Brain &src);
        ~Brain ();
};


#endif