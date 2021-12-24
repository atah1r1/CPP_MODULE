/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:12:37 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/24 12:31:31 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void)
{
	index = 0;
	nb = 0;
}

PhoneBook::~PhoneBook(void)
{
}

Contact PhoneBook::get_contact(int index)
{
	return contacts[index];
}

int PhoneBook::get_nb_contacts(void)
{
	return nb;
}

void PhoneBook::add_contact(Contact contact)
{
	contacts[index] = contact;
	if (index == 7)
		index = 0;
	else
		index++;
	if (nb < 8)
		nb++;
}

void PhoneBook::print_a_contact(int index)
{
	std::cout << "FirstName         : " << contacts[index].getFirstName() << std::endl;
	std::cout << "LastName          : " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname          : " << contacts[index].getNickname() << std::endl;
	std::cout << "PhoneNumber       : " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "DarkestSecret     : " << contacts[index].getDarkestSecret() << std::endl;
}

void PhoneBook::create_contact(void)
{
	Contact contact;
	std::string input;

	std::cout << "FirstName: ";
	std::getline(std::cin, input);
	contact.setFirstName(input);

	std::cout << "LastName: ";
	std::getline(std::cin, input);
	contact.setLastName(input);

	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	contact.setNickname(input);

	std::cout << "PhoneNumber: ";
	std::getline(std::cin, input);
	contact.setPhoneNumber(input);

	std::cout << "DarkestSecret: ";
	std::getline(std::cin, input);
	contact.setDarkestSecret(input);

	add_contact(contact);
}

bool check_number(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
		if (isdigit(str[i]) == false)
			return false;
	return true;
}

void PhoneBook::search_for_contact(void)
{
	std::cout << "\n";
	std::cout << "index | First Name| Last Name | Nickname |" << std::endl;
	std::cout << "__________________________________________" << std::endl;
	for (int i = 0; i < get_nb_contacts(); i++)
	{
		std::cout << std::setw(10) << i << "|";
		get_contact(i).print_contact();
	}

	std::string input;
	int index;
	std::cout << "\n";
	std::cout << "Enter an index of a contact to see his information: ";
	std::getline(std::cin, input);
	if (!check_number(input))
		std::cout << "Your input isn't an integer" << std::endl;
	else
	{
		index = atoi(input.c_str());
		if (index > get_nb_contacts())
			std::cout << "Your input greater than number of contacts" << std::endl;
		else 
			print_a_contact(index);
	}
}