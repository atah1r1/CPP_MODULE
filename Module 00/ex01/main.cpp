/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:29:56 by atahiri           #+#    #+#             */
/*   Updated: 2021/05/21 11:37:03 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int		main(int argc, char *argv[]) 
{
	std::string buff;
	int		nb(0);
	Contact contact[3];

	while (1) {
		std::cout <<  "Enter Command: " ;
		std::getline(std::cin, buff);
		if (buff == "EXIT") {
			break ;
		}

		else if (buff == "ADD") 
		{
			if (nb < 3){
                contact[nb].setData();
				nb++;
			}
            else
                std::cout << "\033[1;31mPhonebook is full ...!\033[0m" << std::endl;
		}
		else if (buff == "SEARCH") {
			if (nb > 0) {
				for (int i = 0; i < nb; i++) {
					contact[i].printData();
				}
			}
			else {
				std::cout << "\033[1;31mNothing to print ... !\033[0m" << std::endl;
			}
		}
		
		else {
			std::cout << "\033[1;31mCommand discarded !!\033[0m" << std::endl;
		}
	}
	return 0;
}