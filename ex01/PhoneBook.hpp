/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:33:29 by mhanda            #+#    #+#             */
/*   Updated: 2022/12/31 02:30:05 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>

class PhoneBook
{                             
    enum commands { add, search, exit, default };
    commands parse(const std::string &);
    
public:
    
    PhoneBook();
    
    void prompt();
};

class Contact
{
public:

};


// class test
// {
//     public:
//         void prin_hi()
//         {
//             cout << "just be it" << endl;
//         }
//         void prin_scro()
//         {
//             cout << "scro" << endl;
//         }
//         void prin_sream()
//         {
//             cout << "sream" << endl;
//         }
// };

// class Pubg : public test
// {
//     public:
//     void make_pasta()
//     {
//         cout << "pata" << endl;
//     }
//     void prin_sream()
//     {
//         cout << "sream1" << endl;
//     }
// };

// class PhoneBook
// {
//     private :
//         int age;
//     public:
//         string name;
//         int born_year;
//     PhoneBook()
//     {
//         name = "ana hona ";
//         born_year = 15;
//         age = 10;
//     }
//     PhoneBook(string a_name, int a_born_year, int a_age)
//     {
//         name = a_name;
//         born_year = a_born_year;
//         set_age(a_age);
//     }
//     void set_age(int seter)
//     {
//         age = seter;
//     }
//     int get_age()
//     {
//         return (age);
//     }
//     // bool check_num()
//     // {
//     //     if (age == 10)
//     //         return true;
//     //     return false;
//     // }
// };

#endif