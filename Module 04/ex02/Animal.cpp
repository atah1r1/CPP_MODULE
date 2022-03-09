/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:44:51 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/08 23:01:55 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal Default Constructor" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal Copy Constructor" << std::endl;
    *this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "Animal Assignment Operator" << std::endl;
    this->type = obj.type;
    return *this;
}

std::string Animal::getType(void) const
{
    std::cout << "Animal getType" << std::endl;
    return this->type;
}

void Animal::makeSound(void) const
{
    std::cout << "animal sound" << std::endl;
}