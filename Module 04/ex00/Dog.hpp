/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:51:46 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/08 23:05:16 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog(void);
    ~Dog();
    Dog(const Dog &obj);            // copy constructor
    Dog &operator=(const Dog &obj); // assignment operator

    std::string getType(void) const;

    void makeSound(void) const;
};

#endif