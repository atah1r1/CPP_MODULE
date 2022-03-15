/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 10:20:46 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/15 15:51:06 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    In C++, dynamic casting is, primarily, used to safely downcast; i.e.,
    cast a base class pointer (or reference) to a derived class pointer (or reference).
*/

#include "Base.hpp"
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
    srand(time(NULL));
    int rand1, rand2;
    rand1 = rand();
    rand2 = rand();
    if (rand1 % 2)
    {
        std::cout << "instance Type A" << std::endl;
        Base *classA = new A();
        return classA;
    }
    else if (rand2 % 2)
    {
        std::cout << "instance Type B" << std::endl;
        Base *classB = new B();
        return classB;
    }
    std::cout << "instance Type C" << std::endl;
    Base *classC = new C();
    return classC;
}
void identify(Base *p)
{
    A *instA = dynamic_cast<A *>(p);
    if (instA != nullptr)
        std::cout << "A casted" << std::endl;

    B *instB = dynamic_cast<B *>(p);
    if (instB != nullptr)
        std::cout << "B casted" << std::endl;

    C *instC = dynamic_cast<C *>(p);
    if (instC != nullptr)
        std::cout << "C casted" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &instA = dynamic_cast<A &>(p);
        (void)instA;
        std::cout << "A reference casted" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        B &instB = dynamic_cast<B &>(p);
        (void)instB;
        std::cout << "B reference casted" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        C &instC = dynamic_cast<C &>(p);
        (void)instC;
        std::cout << "C reference casted" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    Base *test1 = generate();
    identify(test1);
    std::cout << "-----------" << std::endl;
    Base &test2 = *generate();
    identify(test2);
}