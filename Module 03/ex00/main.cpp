/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:28:29 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/07 14:58:38 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("AMINE");
    ClapTrap b("WALID");
    a.attack(b.getName());
    a.takeDamage(3);
    // a.takeDamage(3);
    a.beRepaired(1);

    return 0;
}