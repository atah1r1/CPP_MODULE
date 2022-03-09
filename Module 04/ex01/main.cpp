/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:42:51 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/09 10:37:09 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Create Dog and Cat Objects" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    delete j; // should not create a leak
    delete i;
    std::cout << std::endl;

    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Create array of animals[4] half Dogs and half Cats" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

    Animal *animals[4];
    for (size_t i = 0; i < 4; i++)
        i % 2 == 0 ? animals[i] = new Dog() : animals[i] = new Cat();
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Delete the Dogs and the Cats array as an animal" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    for (size_t i = 0; i < 4; i++)
        delete animals[i];
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Test the deep of Dog and Cat copy" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    Cat basic;
    {
        Cat tmp = basic;
    }

    std::cout << std::endl;
    system("leaks Brain");
    std::cout << std::endl;

    return 0;
}