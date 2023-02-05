/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:10:49 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/05 23:56:28 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    srand(time(NULL));
    Base *base = generate();
    // std::cout << base << std::endl;
    identify(base);
    identify(*base);
    // std::cout << base << std::endl;
    delete base;
    return (0);
}