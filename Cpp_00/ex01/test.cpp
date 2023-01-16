/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 06:12:53 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/16 06:12:54 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, input);
    std::cout << "You entered: " << input << std::endl;
    return 0;
}
