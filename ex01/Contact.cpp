/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 05:23:06 by mokoucha          #+#    #+#             */
/*   Updated: 2022/10/17 01:25:56 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::insert_contact(int id)
{
	this->_id = std::to_string(id);
	std::cout << "Enter First Name : ";
	std::getline(std::cin, this->_firstname);
	while (this->_firstname.length() == 0)
	{
		std::cout << "You Enter Invalid Input !!!!\n Please Enter First Name : ";  
		std::getline(std::cin, this->_firstname);
	}

	std::cout << "Enter Last Name : ";
	std::getline(std::cin, this->_lastname);
	while (this-> _lastname.length() == 0)
	{
		std::cout << "You Enter Invalid Input !!!! \n Please Enter Last Name : ";
		std::getline(std::cin, this->_lastname);
	}
	
	std::cout << "Enter Nickname : ";
	std::getline(std::cin, this-> _nickname);
	while (this->_nickname.length() == 0)
	{
		std::cout << "You Enter Invalid Input !!!!\n Please Enter Nick Name : ";
		std::getline(std::cin, this->_nickname);
	}

	std::cout << "Enter Phone Number : ";
	std::getline(std::cin, this->_phone);
	while (this->_phone.length() == 0)
	{
		std::cout << "You Enter Invalid Phone Number !!!! \n Please Enter Phone Number : ";
		std::getline(std::cin, this->_phone);
	}

	std::cout << "Enter Darkest Secret : ";
	std::getline(std::cin, this->_secret);
	while (this->_secret.length() == 0 )
	{
		std::cout << "You Enter Invalid Input !!!! \n Enter Drkest Secret : ";
		std::getline(std::cin, this->_secret);
	}
}

std::string Contact::get_id(void)
{
	return (this->_id);
}

std::string Contact::get_firstname(void)
{
	return(this->_firstname);
}

std::string Contact::get_lastname(void)
{
	return(this->_lastname);
}

std::string Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string Contact::get_phone(void)
{
	return (this->_phone);
}

std::string Contact::get_secret(void)
{
	return(this->_secret);
}
