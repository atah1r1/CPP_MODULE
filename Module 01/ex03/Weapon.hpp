/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:41:26 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/28 13:46:44 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(void);
	~Weapon(void);
	Weapon(std::string const &type);
	std::string const &getType(void) const;
	void setType(std::string const &type);
};

#endif