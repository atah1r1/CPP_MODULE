/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:41:28 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/01 11:02:12 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string const &type)
{
	this->_type = type;
}

Weapon::~Weapon(void)
{
}

std::string const &Weapon::getType(void) const
{
	return this->_type;
}

void Weapon::setType(std::string const &type)
{
	this->_type = type;
}