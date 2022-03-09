/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:51:48 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/09 11:13:33 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Default Constructor" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
    this->setBrain("Brain Dog");
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog Destructor" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog Copy Constructor" << std::endl;
    this->brain = new Brain();
    *this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Assignment Operator" << std::endl;
    *this->brain = *(obj.brain);
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

Brain *Dog::getBrain(void) const
{
    return (this->brain);
}

void Dog::setBrain(std::string idea)
{
    brain->setIdeas(idea);
}