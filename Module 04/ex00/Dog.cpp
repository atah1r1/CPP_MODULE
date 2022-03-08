/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:51:48 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/08 17:39:51 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Dog::Dog(std::string type) : Animal("Dog")
// {
//     std::cout << "Dog Parameterized Constructor" << std::endl;
// }

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
// void Dog::setType(std::string type) const
// {
//     std::cout << "Dog setType" << std::endl;
//     this->type = type;
// }

void Dog::makeSound(void) const
{
    std::cout << "cats don’t bark" << std::endl;
}