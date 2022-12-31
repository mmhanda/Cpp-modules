/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 04:06:07 by mhanda            #+#    #+#             */
/*   Updated: 2022/12/31 02:26:48 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    
}

void PhoneBook::prompt() {
    std::string cmd;
    while (1)
    {
        std::cout << "phone_book >> ";
        std::getline(std::cin, cmd);
        std::cout << cmd << std::endl;
        if(cmd == "ADD")
            take_contact_info();
    }
}

commands PhoneBook::parse(const std::string &cmd) {
    
}


void take_contact_info()
{
    std::cout << "first name" << std::endl;
    // std::cin >> `
    exit(0);
}

int main()
{
    PhoneBook phonebook;

    phonebook.prompt();
}


int main(int ac, char **av)
{
    std::cout << num1::test << std::endl;
    // Pubg print;
    // test print1;
    // print.prin_sream();
    // print1.prin_sream();
    // PhoneBook phon1("", 90, 89);
    // phon1.set_age(10);
    // cout << phon1.get_age() << endl;
    // cout << phon1.born_year << endl;
    // cout << phon1.age << endl;
    // cout << phon1.check_num() << endl;




    // phon2.name = "hoda";
    // phon1.name = "ziko";
    // cout << "phone 1 " << phon1.name << endl;
    // cout << "phone 2 " << phon2.name << endl;
    return(0);
}
