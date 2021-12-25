/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 16:19:41 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/25 16:23:53 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* new Creates an Object from a class on the Heap and return a pointer to it
you need to delete it at the end */

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *zombie = new Zombie;
	return zombie;
}