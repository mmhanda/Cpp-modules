/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 04:06:07 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/16 09:10:18 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void add_contac(int i, PhoneBook *phone)
{
	std::string seter;

	while(seter.empty())
	{
		std::cout << "Enter the first name\n";
		std::getline(std::cin, seter);
		if (std::cin.eof()) {
			std::cout << "EOF detected, exiting program" << std::endl;
			exit(0);
		}
	}
	phone->contac[i].setData(seter , "first_name");
	seter.clear();
	while(seter.empty())
	{
		std::cout << "Enter the last name\n";
		std::getline(std::cin, seter);
		if (std::cin.eof()) {
			std::cout << "EOF detected, exiting program" << std::endl;
			exit(0);
		}
	}
	phone->contac[i].setData(seter , "last_name");	
	seter.clear();
	while(seter.empty())
	{
		std::cout << "Enter the nickname\n";
		std::getline(std::cin, seter);
		if (std::cin.eof()) {
			std::cout << "EOF detected, exiting program" << std::endl;
			exit(0);
		}
	}
	phone->contac[i].setData(seter , "nickname");
	seter.clear();
	while(seter.empty())
	{
		std::cout << "Enter the phone number\n";
		std::getline(std::cin, seter);
		if (std::cin.eof()) {
			std::cout << "EOF detected, exiting program" << std::endl;
			exit(0);
		}
	}
	phone->contac[i].setData(seter , "phone_number");
	seter.clear();
	while(seter.empty())
	{
		std::cout << "Enter the darkest secret\n";
		std::getline(std::cin, seter);
		if (std::cin.eof()) {
			std::cout << "EOF detected, exiting program" << std::endl;
			exit(0);
		}
	}
	phone->contac[i].setData(seter , "darkest_secret");
}

void field_per_line(int rem, PhoneBook *phone)
{
	std::cout << "first name: " << phone->contac[rem].getData("first_name") << "\n";
	std::cout << "last name: " << phone->contac[rem].getData("last_name") << "\n";
	std::cout << "nickname: " << phone->contac[rem].getData("nickname") << "\n";
	std::cout << "phone number: " << phone->contac[rem].getData("phonenumber") << "\n";
	std::cout << "darkest secret: " << phone->contac[rem].getData("darkest_secret") << "\n";
}
