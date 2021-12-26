/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 12:17:06 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/26 12:18:51 by atahiri          ###   ########.fr       */
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

Zombie *zombieHorde(int N, std::string name);

#endif