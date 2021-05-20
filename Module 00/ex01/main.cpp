/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:29:56 by atahiri           #+#    #+#             */
/*   Updated: 2021/05/20 14:15:52 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int		main(int argc, char *argv[]) 
{
	std::string buff;
	int		nb(0);
	Contact contact[8];

	while (1) {
		std::cout <<  "Enter Command: " ;
		std::getline(std::cin, buff);
		if (buff == "EXIT") {
			break ;
		}

		else if (buff == "ADD") 
		{
			contact[nb].getData();
			nb++;
		}
		else if (buff == "SEARCH") {
			for (int i = 0; i < nb; i++) {
				contact[i].printData();
			}
		}
		
		else {
			std::cout << "Command discarded !!" << std::endl;
		}
	}
	return 0;
}