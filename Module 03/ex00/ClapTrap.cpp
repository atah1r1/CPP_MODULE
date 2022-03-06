/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:25:23 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/06 17:08:08 by atahiri          ###   ########.fr       */
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
    std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    // std::cout << "AMOUNT: " << amount << std::endl;
    if (amount > 0 && amount < 4294967295)
    {
        // std::cout << "entred" << " " << amount << std::endl;
        if (this->_hitPoints < 0)
        {
            std::cout << "ClapTrap " << this->getName() << " can't take more damage , he only has " << this->getHitPoints() << " hit points !" << std::endl;
        }
        if (this->_hitPoints > 0 && this->_hitPoints >= amount)
        {
            this->_hitPoints -= amount;
            this->_energyPoints -= amount;
            std::cout << "ClapTrap " << this->getName() << " has " << this->getHitPoints() << " hit points after taking [[ " << amount << " ]] points of damage!" << std::endl;
        }
        else
        {
            this->_hitPoints = 0;
            this->_energyPoints = 0;
            std::cout << "ClapTrap " << this->getName() << " is dead 💀 after taking [[ " << amount << " ]] points of damage!" << std::endl;
        }
        this->_attackDammage += amount;
    }
    else
    {
        std::cout << "You entered an amount of dammage less than 0" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount > 0 && amount < 4294967295)
    {
        if (this->_hitPoints <= 0)
            std::cout << "Sadly " << this->getName() << " can not be repaired" << std::endl;
        else
        {
            this->_hitPoints += amount;
            this->_energyPoints += amount;
            std::cout << this->_name << " restored " << amount << " points!" << std::endl;
        }
        std::cout << this->getName() << " Hit points : [[ " << this->getHitPoints() << " ]]" << " Energy points : [[ " << this->getEnergyPoints() << " ]] "  << "Attack damage : [[ " << this->getAttackDamage() << " ]]" << std::endl;
    }
    else
    {
        std::cout << "You entered an amount of dammage less than 0" << std::endl;
    }
}