/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 04:49:18 by mokoucha          #+#    #+#             */
/*   Updated: 2022/10/15 06:24:00 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(void)
{
	this->i = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::ft_add(void)
{
	int i;

	i = this->i;
	if (i > 7)
		i = this->i % 8;
	this->contact[i].insert_contact(i);
	this->i++;
	return;
}

void	Phonebook::ft_search(void)
{
	std::string input;
	int i;

	if (this->i == 0)
	{
		std::cout << "You Dont Have Any Contact !!! Try To Enter Some Contacts \n";
		return ;
	}
	this->ft_print_contacts();
	std::cout << "SEARCH: ";
	std::getline(std::cin, input);
	if (std::isdigit(input[0]) && input.length() == 1)
	{
		i = std::atoi(input.c_str());
		if (i >= this->i || i > 7)
			std::cout << "Contact 404 ! \n";
		else
		{
			std::cout << "First Name : " << this->contact[i].get_firstname() << std::endl;
			std::cout << "Last Name : " << this->contact[i].get_lastname() << std::endl;
			std::cout << "Nickname : " << this->contact[i].get_nickname() << std::endl;
			std::cout << "Phone Number : " << this-> contact[i].get_phone() << std::endl;
			std::cout << "Darkest Secret : " << this->contact[i].get_secret() << std::endl;
		}
	}
	else
		std::cout << "Contact 404 \n";
}

static void ft_contact_show(std::string str)
{
	int i;
	int j;

	std::cout << "|";
	i = str.length();
	if (i > 10)
	{
		for(j = 0; j < 9; j++)
			std::cout << str[j];
		std::cout << " . ";
	}
	else
	{
		std::cout << str;
		while (i < 10)
		{
			std::cout << " ";
			i++;
		}
	}
}

void	Phonebook::ft_print_contacts(void)
{
	int i;

	std::cout << "|INDEX     |First Name|Last Name |Nickname  |\n";
	i = 0;
	while (i < this->i && i < 8)
	{
		ft_contact_show(this->contact[i].get_id());
		ft_contact_show(this->contact[i].get_firstname());
		ft_contact_show(this->contact[i].get_lastname());
		ft_contact_show(this->contact[i].get_nickname());
		std::cout << "|" << std::endl;
		i++;
	}
}
