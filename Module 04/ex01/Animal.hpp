/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:44:49 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/09 11:24:27 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal
{
protected:
    std::string type;

public:
    Animal(void);
    virtual ~Animal();
    Animal(const Animal &obj);            // copy constructor
    Animal &operator=(const Animal &obj); // assignment operator

    std::string getType(void) const;

    virtual void makeSound(void) const;
};

#endif