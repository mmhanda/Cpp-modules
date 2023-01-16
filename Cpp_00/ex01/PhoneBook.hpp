/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:33:29 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/16 11:21:00 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    public:
        Contact contac[8];
};

void display_contacts(int rem, PhoneBook *phone);
void add_contac(int i, PhoneBook *phone);
void field_per_line(int rem, PhoneBook *phone);
void search_contac(int i, PhoneBook *phone);
void display_contacts(int rem, PhoneBook *phone);

#endif