/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 10:20:46 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/15 10:39:19 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
    srand(time(NULL));
    int choice1, choice2;
    choice1 = rand();
    choice2 = rand();
    if (choice1 % 2)
    {
        std::cout << "instance Type A" << std::endl;
        Base *classA = new A();
        return classA;
    }
    else if (choice2 % 2)
    {
        std::cout << "instance Type B" << std::endl;
        Base *classB = new B();
        return classB;
    }
    std::cout << "instance Type C" << std::endl;
    Base *classC = new C();
    return classC;
}
void identify(Base *p);
void identify(Base &p);

int main()
{
    generate();
}