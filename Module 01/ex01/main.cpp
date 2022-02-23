/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 12:28:04 by atahiri           #+#    #+#             */
/*   Updated: 2022/02/23 08:54:41 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

    Zombie *Zombies;
    int     N(5);

    Zombies = zombieHorde(N, "ZOMBIE");
    for (int i = 0; i < N; i++)
       Zombies[i].announce();
    delete [] Zombies;   

    return (0);
}