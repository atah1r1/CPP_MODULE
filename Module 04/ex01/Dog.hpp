/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:51:46 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/09 10:23:00 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;

public:
    Dog(void);
    ~Dog();
    Dog(const Dog &obj);            // copy constructor
    Dog &operator=(const Dog &obj); // assignment operator

    std::string getType(void) const;

    void makeSound(void) const;

    Brain *getBrain(void) const;
    void setBrain(std::string str);
};

#endif