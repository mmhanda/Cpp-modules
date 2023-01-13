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

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phonenumber;
    std::string darkest_secret;
public:
    Contact(/* args */);
    ~Contact();
};

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}
