/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:29:56 by atahiri           #+#    #+#             */
/*   Updated: 2021/05/21 10:33:29 by atahiri          ###   ########.fr       */
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
			contact[nb].setData();
			nb++;
		}
		else if (buff == "SEARCH") {
			for (int i = 0; i < nb; i++) {
				contact[i].printData();
			}
		}
		
		else {
			std::cout << "\033[1;31mCommand discarded !!\033[0m" << std::endl;
		}
	}
	return 0;
}