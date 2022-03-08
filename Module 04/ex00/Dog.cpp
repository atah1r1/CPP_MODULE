/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:51:48 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/08 23:08:12 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Default Constructor" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog Copy Constructor" << std::endl;
    *this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Assignment Operator" << std::endl;
    this->type = obj.type;
    return *this;
}

std::string Dog::getType(void) const
{
    std::cout << "Dog getType" << std::endl;
    return this->type;
}

void Dog::makeSound(void) const
{
    std::cout << "dog bark" << std::endl;
}