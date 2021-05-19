/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:03:45 by atahiri           #+#    #+#             */
/*   Updated: 2021/05/19 16:51:43 by atahiri          ###   ########.fr       */
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

void	Contact::printData() {
	std::cout << "First Name: ";
	std::cout << this->_first_name << std::endl;
	std::cout << "Last Name: ";
	std::cout << this->_last_name << std::endl;
	std::cout << "NickName: ";
	std::cout << this->_nickname << std::endl;
	std::cout << "Login: ";
	std::cout << this->_login << std::endl;
	std::cout << "Postal Address: ";
	std::cout << this->_postal_address << std::endl;
	std::cout << "Email Address: ";
	std::cout << this->_email_address << std::endl;
	std::cout << "Phone Number: ";
	std::cout << this->_phone_number << std::endl;
	std::cout << "Birthday Date: ";
	std::cout << this->_birthday_date << std::endl;
	std::cout << "Favorite Meal: ";
	std::cout << this->_favorite_meal << std::endl;
	std::cout << "Underwear Color: ";
	std::cout << this->_underwear_color << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << this->_darkest_secret << std::endl;
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

std::string	Contact::getLogin() {
	return (this->_login);
}

std::string	Contact::getPostalAddress() {
	return (this->_postal_address);
}

std::string	Contact::getEmailAddress() {
	return (this->_email_address);
}

std::string	Contact::getPhoneNumber() {
	return (this->_phone_number);
}

std::string	Contact::getBirthdayDate() {
	return (this->_birthday_date);
}

std::string	Contact::getFavoriteMeal() {
	return (this->_favorite_meal);
}

std::string	Contact::getUnderwearColor() {
	return (this->_underwear_color);
}

std::string Contact::getDarkestSecret() {
	return (this->_darkest_secret);
}