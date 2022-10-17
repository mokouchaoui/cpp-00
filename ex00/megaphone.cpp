/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:35:54 by mokoucha          #+#    #+#             */
/*   Updated: 2022/10/03 04:50:53 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++)
		for (int j = 0; j < (int)ft_strlen(argv[i]); j++)
			std::cout << (char)ft_toupper(argv[i][j]);
	std::cout << std::endl;
	return 0;
}