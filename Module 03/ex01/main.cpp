/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:28:29 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/07 14:29:03 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("AMINE");
    ScavTrap b("WALID");
    a.attack(b.getName());
    a.takeDamage(2);
    a.takeDamage(3);
    a.beRepaired(1);
    
    a.guardGate();

    return 0;
}