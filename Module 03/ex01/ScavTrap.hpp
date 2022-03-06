/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:55:40 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/06 21:33:28 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(void);
    ScavTrap(std::string const name);
    ~ScavTrap();
    ScavTrap(const ScavTrap &);

    ScavTrap &operator=(const ScavTrap &s);
    void attack(std::string const &target);
    void guardGate();
};

#endif