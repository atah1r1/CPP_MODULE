/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:25:21 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/09 16:42:46 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDammage;

public:
    ClapTrap(void);
    ClapTrap(std::string const name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &obj);            // copy constructor
    ClapTrap &operator=(const ClapTrap &obj); // assignment operator

    std::string getName(void) const;
    int getHitPoints(void) const;
    int getEnergyPoints(void) const;
    int getAttackDamage(void) const;

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif