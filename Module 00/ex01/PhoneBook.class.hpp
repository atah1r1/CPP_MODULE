/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:13:09 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/22 14:46:08 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

class PhoneBook
{
private:
	int index;
	int nb;
	Contact contacts[8];

public:
	PhoneBook();
	~PhoneBook();

	int get_nb_contacts(void);
	void add_contact(Contact contact);
	void print_a_contact(int index);
	void create_contact(void);
	void search_for_contact(void);
	Contact get_contact(int index);
};