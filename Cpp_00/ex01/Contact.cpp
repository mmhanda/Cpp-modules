/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 05:49:33 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/16 09:28:42 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include "./Contact.hpp"

void Contact::setData(std::string seter, std::string decision)
{
    if (decision == "first_name")
        first_name = seter;
    else if (decision == "last_name")
        last_name = seter;
    else if (decision == "nickname")
        nickname = seter;
    else if (decision == "phonenumber")
        phonenumber = seter;
    else if (decision == "darkest_secret")
        darkest_secret = seter;
}

std::string Contact::getData(std::string decision)
{
    if (decision == "first_name")
        return first_name;
    else if (decision == "last_name")
        return last_name;
    else if (decision == "nickname")
        return nickname;
    else if (decision == "phonenumber")
        return phonenumber;
    else if (decision == "darkest_secret")
        return darkest_secret;
    return NULL;
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
