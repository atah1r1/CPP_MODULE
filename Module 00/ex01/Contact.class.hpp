/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:50:22 by atahiri           #+#    #+#             */
/*   Updated: 2021/05/19 15:02:42 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class Contact {

private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_login;
	std::string		_postal_address;
	std::string		_email_address;
	std::string		_phone_number;
	std::string		_birthday_date;
	std::string		_favorite_meal;
	std::string		_underwear_color;
	std::string		_darkest_secret;

public:
	Contact();
	~Contact();

	void			getData();
	void			printData();
	
	std::string		getFirstName();
	std::string		getLastName();
	std::string		getNickname();
	std::string		getLogin();
	std::string		getPostalAddress();
	std::string		getEmailAddress();
	std::string		getPhoneNumber();
	std::string		getBirthdayDate();
	std::string		getFavoriteMeal();
	std::string		getUnderwearColor();
	std::string		getDarkestSecret();
	
};

#endif