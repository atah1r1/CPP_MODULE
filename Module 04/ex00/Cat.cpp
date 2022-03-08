/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:51:44 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/08 23:03:48 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat Default Constructor" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    std::cout << "Cat Copy Constructor" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Cat Assignment Operator" << std::endl;
    this->type = obj.type;
    return *this;
}

std::string Cat::getType(void) const
{
    std::cout << "Cat getType" << std::endl;
    return this->type;
}

void Cat::makeSound(void) const
{
    std::cout << "cats don’t bark" << std::endl;
}