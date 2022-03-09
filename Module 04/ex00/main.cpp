/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:42:51 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/09 09:33:51 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        std::cout << "**** VALID TEST ****" << std::endl;
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); // will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete i;
        delete j;
    }

    {
        std::cout << "**** INVALID TEST ****" << std::endl;
        const WrongAnimal *meta = new WrongAnimal();
        const WrongAnimal *j = new WrongCat();
        std::cout << j->getType() << " " << std::endl;
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
    }

    return 0;
}