/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 04:06:07 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/13 17:19:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// void PhoneBook::prompt() {
//     std::string cmd;
//     while (1)
//     {
//         std::cout << "phone_book >> ";
//         std::getline(std::cin, cmd);
//         std::cout << cmd << std::endl;
//         if(cmd == "ADD")
//             take_contact_info();
//     }
// }


// void take_contact_info()
// {
//     std::cout << "first name" << std::endl;
//     // std::cin >> `
//     exit(0);
// }



void    check_command(std::string command)
{
    if (command == "ADD")
    {
        std::cout << "ADD" << "\n";
    }
    else if (command == "SEARCH")
    {
        std::cout << "SEARCH" << "\n";
    }
    else if (command == "EXIT")
        exit(0);
}

int main()
{
    std::string cmd;
    bool bok = true;
    // std::cin >> cmd;
    while (bok && std::getline(std::cin, cmd))
    {
        if(!cmd.compare("ADD"))
            std::cout << "ADD" << "\n";
        // if(!cmd.compare("SEARCH"))
        if(!cmd.compare("EXIT"))
        {
            std::cout << "exiting" << "\n";
            bok = false;
        }
        // check_command(cmd);
    }
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
