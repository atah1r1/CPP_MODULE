/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:29:56 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/20 23:38:40 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int		main(int argc, char *argv[]) 
{

	std::string cmd;
	PhoneBook phonebook;

	while (1) {
		std::cout << "Enter a command: ";
		std::getline(std::cin, cmd);
		
		if (strcmp(cmd.c_str(), "ADD") == 0) {
			phonebook.create_contact();
		}
	}
	return (0);
}