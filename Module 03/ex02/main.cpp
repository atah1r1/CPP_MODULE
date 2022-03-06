/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:28:29 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/06 21:57:15 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("AMINE");
    FragTrap b("WALID");
    a.attack(b.getName());
    a.takeDamage(2);
    a.takeDamage(3);
    a.beRepaired(1);

    a.highFivesGuys();

    return 0;
}