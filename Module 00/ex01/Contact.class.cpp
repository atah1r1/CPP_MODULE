/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:03:45 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/22 14:40:41 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void Contact::setFirstName(std::string str)
{
	_first_name = str;
}

void Contact::setLastName(std::string str)
{
	_last_name = str;
}

void Contact::setNickname(std::string str)
{
	_nickname = str;
}

void Contact::setPhoneNumber(std::string str)
{
	_phone_number = str;
}

void Contact::setDarkestSecret(std::string str)
{
	_darkest_secret = str;
}

std::string Contact::getFirstName()
{
	return _first_name;
}

std::string Contact::getLastName()
{
	return _last_name;
}

std::string Contact::getNickname()
{
	return _nickname;
}

std::string Contact::getPhoneNumber()
{
	return _phone_number;
}

std::string Contact::getDarkestSecret()
{
	return _darkest_secret;
}

void Contact::parse_output(std::string str)
{
	if (str.length() == 10)
		std::cout << str << "|";
	else if (str.length() < 10)
		std::cout << std::setw(10) << str << "|";
	else
		std::cout << str.substr(0, 9) << ".|";
}

void Contact::print_contact(void)
{
	parse_output(_first_name);
	parse_output(_last_name);
	parse_output(_nickname);
	std::cout << "\n";
}