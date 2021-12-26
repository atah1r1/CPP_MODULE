/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 16:03:47 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/26 12:11:44 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "DEFAULT CONSTRUCTOR" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "PARAMETERIZED CONSTRUCTOR" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << std::endl << "END" << std::endl;
}

std::string Zombie::getName(void) const
{
	return this->_name;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void) {
	std::cout << this->_name << " " <<"BraiiiiiiinnnzzzZ..." << std::endl;
}