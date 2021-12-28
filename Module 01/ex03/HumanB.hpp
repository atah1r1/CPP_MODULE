/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:41:20 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/28 13:46:24 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *weaponB;

public:
	HumanB(void);
	~HumanB(void);
	HumanB(std::string name);
	void attack(void);
	void setWeapon(Weapon &weaponB);
};

#endif