/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:26:46 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/19 05:24:22 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac , char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: Wrong number of arguments" << '\n';
		return (1);
	}
	std::ifstream input_file(av[1]);
	if (!input_file.good())
	{
		std::cout << "Error: input File not good" << '\n';
		return (1);
	}
	std::ofstream output_file(std::string(av[1]) + ".replace");
	if (!output_file.good())
	{
		std::cout << "Error: output File not good" << '\n';
		input_file.close();
		return (1);
	}
	std::string s1(av[2]);
	std::string s2 = av[3];
	std::string line;

    char currentchar;
    unsigned long count = 0;
    while (input_file.get(currentchar)) {
        if (currentchar == s1[count])
		{
            count++;
            if (count == s1.length())
			{
                output_file << s2;
                count = 0;
            }
        }
		else
		{
            if (count != 0) 
			{
                for (unsigned long i = 0; i < count; i++)
				{
                    output_file << s1[i];
                }
				count = 0;
            }
            output_file << currentchar;
        }
    }

	input_file.close();
	output_file.close();
}
