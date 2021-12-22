/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:29:56 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/22 14:20:06 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int		main() 
{

	std::string cmd;
	PhoneBook phonebook;

	while (1) {
		std::cout << "Enter a command: ";
		std::getline(std::cin, cmd);
		
		if (strcmp(cmd.c_str(), "ADD") == 0) {
			phonebook.create_contact();
		} else if (strcmp(cmd.c_str(), "EXIT") == 0) {
			return 0;
		} else if (strcmp(cmd.c_str(), "SEARCH") == 0) {
			phonebook.search_for_contact();
		}
	}
	return (0);
}