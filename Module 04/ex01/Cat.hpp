/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:51:42 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/09 10:22:24 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain;

public:
    Cat(void);
    ~Cat();
    Cat(const Cat &obj);            // copy constructor
    Cat &operator=(const Cat &obj); // assignment operator

    std::string getType(void) const;

    void makeSound(void) const;

    Brain *getBrain(void) const;
    void setBrain(std::string str);
};

#endif