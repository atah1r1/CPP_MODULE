/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:55:37 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/06 21:42:11 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
    std::cout << "ScavTrap parameterized constructor" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDammage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    std::cout << "Copy Constructor" << std::endl;
    *this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "Assignment Operator" << std::endl;
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDammage = obj._attackDammage;
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}