/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:51:24 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/09 10:26:13 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Default Constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain Copy Constructor" << std::endl;
    *this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "Brain Assignment Operator" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
    return *this;
}

void Brain::setIdeas(std::string idea)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = idea;
}

std::string Brain::getIdea(unsigned int i)
{
    return (this->ideas[i]);
}