/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:41:23 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/28 13:46:08 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP_
#define HUMANA_HPP_

#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon &weaponA;

public:
	HumanA(std::string name, Weapon &weaponA);
	~HumanA(void);
	void attack(void);
};


#endif