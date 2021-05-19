/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:03:45 by atahiri           #+#    #+#             */
/*   Updated: 2021/05/19 15:11:57 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact() {
	return;
}

Contact::~Contact() {
	return;
}

void	Contact::getData() {
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->_first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->_last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Enter login: ";
	std::getline(std::cin, this->_login);
	std::cout << "Enter postal address: ";
	std::getline(std::cin, this->_postal_address);
	std::cout << "Enter email address: ";
	std::getline(std::cin, this->_email_address);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->_phone_number);
	std::cout << "Enter birthday date: ";
	std::getline(std::cin, this->_birthday_date);
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, this->_favorite_meal);
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, this->_underwear_color);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);
}
