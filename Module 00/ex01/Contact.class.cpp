/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:03:45 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/14 17:32:41 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact() {
	return;
}

Contact::~Contact() {
	return;
}

void	Contact::setData() {
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->_first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->_last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->_phone_number);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);
}

void	Contact::printData() {
	std::cout << "----------------------" << std::endl;
	std::cout << "First Name: ";
	std::cout << this->_first_name << std::endl;
	std::cout << "Last Name: ";
	std::cout << this->_last_name << std::endl;
	std::cout << "NickName: ";
	std::cout << this->_nickname << std::endl;
	std::cout << "Phone Number: ";
	std::cout << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << this->_darkest_secret << std::endl;
	std::cout << "----------------------" << std::endl;
}

std::string	Contact::getFirstName() {
	return (this->_first_name);
}

std::string	Contact::getLastName() {
	return (this->_last_name);
}

std::string	Contact::getNickname() {
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber() {
	return (this->_phone_number);
}

std::string Contact::getDarkestSecret() {
	return (this->_darkest_secret);
}