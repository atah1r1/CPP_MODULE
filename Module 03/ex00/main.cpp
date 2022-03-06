/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:28:29 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/06 17:10:47 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("AMINE");
    ClapTrap b("WALID");
    a.attack(b.getName());
    a.takeDamage(2);
    a.beRepaired(1);

    return 0;
}