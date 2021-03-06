/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 11:58:36 by atahiri           #+#    #+#             */
/*   Updated: 2022/02/23 08:43:49 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main() 
{
	std::cout << "newZombie Function" << std::endl;
	Zombie *z = newZombie("ZombieOnHeap");
	z->announce();
	delete(z);
	

	std::cout << "randomChump Function" << std::endl;
	randomChump("ZombieOnstack");

	
	return (0);
}