/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:07:36 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/13 17:07:36 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.hpp"

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phonenumber;
        std::string darkest_secret;
    public:
        void setData(std::string seter, std::string decision)
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
        std::string getData(std::string decision)
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
};

#endif