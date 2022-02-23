/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 15:37:26 by atahiri           #+#    #+#             */
/*   Updated: 2022/02/23 08:44:08 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();				  // default constructor
	Zombie(std::string name); // parametarized constructor
	~Zombie();				  // destructor

	std::string getName(void) const; //getter
	void setName(std::string name);	 //setter

	void announce(void);

};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif