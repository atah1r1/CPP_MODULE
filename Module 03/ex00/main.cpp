/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:28:29 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/08 00:37:24 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("AMINE");
    ClapTrap b("WALID");
    a.attack(b.getName());
    a.takeDamage(10);
    a.beRepaired(10);
    return 0;
}