/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:25:23 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/08 00:37:58 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
    std::cout << "ClapTrap parameterized constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "Copy Constructor" << std::endl;
    *this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "Assignment Operator" << std::endl;
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDammage = obj._attackDammage;
    return *this;
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}

int ClapTrap::getHitPoints(void) const
{
    return this->_hitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
    return this->_attackDammage;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints >= 0 && this->_energyPoints >= 0)
    {
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
        this->_hitPoints -= this->_attackDammage;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    // std::cout << "AMOUNT: " << amount << std::endl;
    std::cout << "ClapTrap " << this->getName() << " take " << amount << " of damage" << std::endl;
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    std::cout << "ClapTrap " << this->getName() << " has " << this->getHitPoints() << " hit points left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints >= 0 && this->_energyPoints >= 0)
    {
        std::cout << "ClapTrap " << this->_name << " repairs itself, it gets ";
        std::cout << amount << " hit points back!" << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints -= 1;
        std::cout << "ClapTrap " << this->getName() << " has " << this->getHitPoints() << " hit points left" << std::endl;
    }
}