/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:41:22 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/28 13:49:22 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB(void)
{
}

HumanB::HumanB(void)
{
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void HumanB::setWeapon(Weapon &weaponB)
{
	this->weaponB = &weaponB;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " "
			  << "attacks with his"
			  << " "
			  << this->weaponB->getType() << std::endl;
}