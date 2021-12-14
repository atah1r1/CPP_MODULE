/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:50:22 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/14 14:08:17 by atahiri          ###   ########.fr       */
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
	std::string		_phone_number;
	std::string		_darkest_secret;

public:
	Contact();
	~Contact();

	void			setData();
	void			printData();
	
	std::string		getFirstName();
	std::string		getLastName();
	std::string		getNickname();
	std::string		getPhoneNumber();
	std::string		getDarkestSecret();
	
};

#endif