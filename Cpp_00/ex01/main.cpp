/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:09:03 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/18 05:25:33 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include "./PhoneBook.hpp"

int main()
{
	std::string cmd;
	PhoneBook phone;

	int i = 0;
	int rem = 0;
	std::cout << "\tThe program only accepts\n\t ADD | SEARCH | EXIT" << "\n";
	std::cout << "> ";
	while (std::getline(std::cin, cmd))
	{
		if (std::cin.eof())
		{
			std::cout << "EOF detected, exiting program" << std::endl;
			exit(0);
		}
		if(!cmd.compare("ADD"))
		{
			add_contac(i, &phone);
			i ++;
		}
		if (!cmd.compare("SEARCH"))
		{
			std::cout << " index     |first name|last name |nickname  " << "\n";
			while (rem < 8)
			{
				display_contacts(rem, &phone);
				rem ++;
			}
			std::cout << "Enter the index of the contact you want to display\n";
			std::cin >> rem;
			if (rem <= 7 && rem >= 0)
				field_per_line(rem, &phone);
			rem = 0;
		}
		if (i == 8)
			i = 0;
		if(!cmd.compare("EXIT"))
			break;
		std::cout << "> ";
	}

	return(0);
}
