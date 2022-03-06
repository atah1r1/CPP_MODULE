/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:55:37 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/06 21:56:57 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
    std::cout << "FragTrap parameterized constructor" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDammage = 20;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    std::cout << "Copy Constructor" << std::endl;
    *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "Assignment Operator" << std::endl;
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDammage = obj._attackDammage;
    return *this;
}

void FragTrap::attack(const std::string &target)
{
    std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap high fives request." << std::endl;
}