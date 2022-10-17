/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 04:36:15 by mokoucha          #+#    #+#             */
/*   Updated: 2022/10/15 06:12:13 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	Phonebook c_phone;
	std::string input;
	int	loop;

	loop = 1;
	while (loop == 1)
	{
		std::cout << "WELCOME TO PHONE PHONEBOOK PLEASE ENTER YOUR CHOISE : \n";
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			c_phone.ft_add();
		else if (input.compare("SEARCH") == 0)
			c_phone.ft_search();
		else if (input.compare("EXIT") == 0)
			loop = 0;
	}
	return (0);
}
