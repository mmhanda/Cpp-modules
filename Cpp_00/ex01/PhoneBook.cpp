/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 04:06:07 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/15 09:00:09 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void add_contac(int i, PhoneBook *phone)
{
	std::string seter;

	std::cout << "Enter the first name\n";
	std::getline(std::cin, seter);
	if (std::cin.eof()) {
		std::cout << "EOF detected, exiting program" << std::endl;
		exit(0);
	}
	phone->contac[i].setData(seter , "first_name");
	std::cout << "Enter the last name\n";
	std::getline(std::cin, seter);
	if (std::cin.eof()) {
		std::cout << "EOF detected, exiting program" << std::endl;
		exit(0);
	}
	phone->contac[i].setData(seter , "last_name");
	std::cout << "Enter the nickname\n";
	std::getline(std::cin, seter);
	if (std::cin.eof()) {
		std::cout << "EOF detected, exiting program" << std::endl;
		exit(0);
	}
	phone->contac[i].setData(seter , "nickname");
	std::cout << "Enter the phone number\n";
	std::getline(std::cin, seter);
	if (std::cin.eof()) {
		std::cout << "EOF detected, exiting program" << std::endl;
		exit(0);
	}
	phone->contac[i].setData(seter , "phonenumber");
	std::cout << "Enter the darkest secret\n";
	std::getline(std::cin, seter);
	if (std::cin.eof()) {
		std::cout << "EOF detected, exiting program" << std::endl;
		exit(0);
	}
	phone->contac[i].setData(seter , "darkest_secret");
}

void display_contacts(int rem, PhoneBook *phone)
{
	int appe = 0;

	std::string first_name = phone->contac[rem].getData("first_name");
	if (first_name.length() > 10)
	{
		first_name = first_name.substr(0, 9);
		first_name = first_name.append(".");
	}
	else 
	{
		appe = first_name.length();
		while (appe < 10)
		{
			first_name = first_name.insert(0, " ");
			appe ++;
		}
	}
	std::string last_name = phone->contac[rem].getData("last_name");
	if (last_name.length() > 10)
	{
		last_name = last_name.substr(0, 9);
		last_name = last_name.append(".");
	}
	else 
	{
		appe = last_name.length();
		while (appe < 10)
		{
			last_name = last_name.insert(0, " ");
			appe ++;
		}
	}
	std::string nickname = phone->contac[rem].getData("nickname");
	if (nickname.length() > 10)
	{
		nickname = nickname.substr(0, 9);
		nickname = nickname.append(".");
	}
	else 
	{
		appe = nickname.length();
		while (appe < 10)
		{
			nickname = nickname.insert(0, " ");
			appe ++;
		}
	}
	std::cout <<"|         " << rem << "|" << first_name << "|" << last_name << "|" << nickname << "|\n";
}

void field_per_line(int rem, PhoneBook *phone)
{
	std::cout << "first name: " << phone->contac[rem].getData("first_name") << "\n";
	std::cout << "last name: " << phone->contac[rem].getData("last_name") << "\n";
	std::cout << "nickname: " << phone->contac[rem].getData("nickname") << "\n";
	std::cout << "phone number: " << phone->contac[rem].getData("phonenumber") << "\n";
	std::cout << "darkest secret: " << phone->contac[rem].getData("darkest_secret") << "\n";
}

int main()
{
	std::string cmd;
	PhoneBook phone;
	int i = 0;
	int rem = 0;
	std::cout << "\tThe program only accepts\n\t ADD | SEARCH | EXIT" << "\n";
	while (std::getline(std::cin, cmd))
	{
		if (std::cin.eof())
			break;
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
			if (rem <= 7)
			{
				field_per_line(rem, &phone);
			}
			rem = 0;
		}
		if (i == 8)
			i = 0;
		if(!cmd.compare("EXIT"))
			break;
	}
	return(0);
}
