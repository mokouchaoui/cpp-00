/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 05:15:36 by mokoucha          #+#    #+#             */
/*   Updated: 2022/10/15 06:00:00 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		void	insert_contact(int id);
		std::string get_id(void);
		std::string get_firstname(void);
		std::string get_lastname(void);
		std::string get_nickname(void);
		std::string get_phone(void);
		std::string get_secret(void);
	private:
		std::string _id;
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phone;
		std::string _secret;
};

#endif
