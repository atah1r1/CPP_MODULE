/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:41:26 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/01 11:02:10 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <iostream>
#include <string>

/* When you use use 'normal' parameter,
	you pass the parameter by value and 
	hence creating a copy of the parameter you pass.
	If you are using const reference,
	you pass it by reference and the original data is not copied.
*/

class Weapon
{
private:
	std::string _type;

public:
	Weapon(void);
	~Weapon(void);
	Weapon(std::string const &type);
	std::string const &getType(void) const;
	void setType(std::string const &type);
};

#endif