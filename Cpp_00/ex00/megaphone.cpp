/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 03:33:38 by mhanda            #+#    #+#             */
/*   Updated: 2023/01/18 08:11:18 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int i = 1;
	
	int j;
	std::string No_arg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	if (ac == 1)
	{
		std::cout << No_arg << "\n";
		return(0);
	}
	j = 0;
	while (av[i])
	{
		while(av[i][j])
		{
			std::cout << (char) toupper(av[i][j]);
			j ++;
		}
		j = 0;
		i ++;
	}
	std::cout << "\n";

	return(0);
}