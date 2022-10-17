/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 04:44:12 by mokoucha          #+#    #+#             */
/*   Updated: 2022/10/15 04:48:53 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	Phonebook {
	public :
		Phonebook(void);
		~Phonebook(void);
		int i;
		void ft_add(void);
		void ft_search(void);
	private:
		Contact contact[8];
		void  ft_print_contacts(void);
};

#endif
