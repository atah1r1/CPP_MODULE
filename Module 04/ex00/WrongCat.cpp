/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:28:02 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/09 09:29:24 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat Default Constructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    std::cout << "WrongCat Copy Constructor" << std::endl;
    *this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "WrongCat Assignment Operator" << std::endl;
    this->type = obj.type;
    return *this;
}

std::string WrongCat::getType(void) const
{
    std::cout << "WrongCat getType" << std::endl;
    return this->type;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat don’t bark" << std::endl;
}