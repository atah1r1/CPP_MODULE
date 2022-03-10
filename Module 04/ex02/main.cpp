/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:42:51 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/10 13:04:15 by atahiri          ###   ########.fr       */
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

    Cat basic;
    {
        Cat tmp = basic;
    }

    // std::cout << std::endl;
    // std::cout << "----------------------------------------------" << std::endl;
    // std::cout << "TEST ERROR" << std::endl;
    // std::cout << "----------------------------------------------" << std::endl;

    // const Animal *animal = new Animal();
    return 0;
}