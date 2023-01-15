/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 04:06:07 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/15 05:12:31 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"





void add_contac(int i, PhoneBook *phone)
{
	std::string seter;

	std::cout << "Enter the first name\n";
	std::cin >> seter;
	phone->contac[i].setData(seter , "first_name");
	std::cout << "Enter the last name\n";
	std::cin >> seter;
	phone->contac[i].setData(seter , "last_name");
	std::cout << "Enter the nickname\n";
	std::cin >> seter;
	phone->contac[i].setData(seter , "nickname");
	std::cout << "Enter the phone number\n";
	std::cin >> seter;
	phone->contac[i].setData(seter , "phonenumber");
	std::cout << "Enter the darkest secret\n";
	std::cin >> seter;
	phone->contac[i].setData(seter , "darkest_secret");

}

int main()
{
	std::string cmd;
	bool bok = true;
	PhoneBook phone;
	int i = 0;
	int field = 0;
	std::cout << "The program only accepts\n ADD | SEARCH | EXIT" << "\n";
	while (bok && std::getline(std::cin, cmd))
	{
		if(!cmd.compare("ADD"))
			add_contac(i, &phone);
		// if (!cmd.compare("SEARCH"))
		// {
			
		// }
		if (i == 8)
			i = 0;
		if(!cmd.compare("EXIT"))
		{
			std::cout << "exiting" << "\n";
			bok = false;
		}
	}
	return(0);
}
