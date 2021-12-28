/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:41:25 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/28 13:30:35 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
=====================================================================================
 A class with a reference member needs to set the reference in its constructors.
 In most cases this means, that the class cannot have a default constructor.
 =====================================================================================
*/

/*
=====================================================================================
 error: constructor for 'HumanA' must explicitly initialize the member 'weaponA' which does not have a default constructor
 You need to use the constructor initializer list 
 REASON: Reference data members must be intialized when compiler enters constructor as references can't be just declared 
 & initialized later. This is possible only with constructor initializer list.
 =====================================================================================
*/

/*-- Constructors & Destructor --*/

/*
=====================================================================================
This is because references must refer to something and therefore cannot be default constructed.
=====================================================================================
*/

HumanA::~HumanA(void)
{
}

HumanA::HumanA(std::string name, Weapon &weaponA) : _name(name), weaponA(weaponA)
{
}

void HumanA::attack(void)
{
	std::cout << this->_name << " "
			  << "attacks with his"
			  << " "
			  << this->weaponA.getType() << std::endl;
}