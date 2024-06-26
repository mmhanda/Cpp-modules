/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 05:12:33 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/05 15:20:25 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return (1);
    }
    std::string input = av[1];
    Converter literal(input);
    Type typ;
    typ = literal.getType(input);
    literal.convert(typ);
    literal.print_literal();
    return (0);
}