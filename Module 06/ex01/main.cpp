/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:59:14 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/15 10:19:34 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// reinterpret_cast used to cast a datatype to another datatype , i doesn't matter
// checking if it's possible or not
// uintptr_t size of 8 bit it stores the Decimal number of the datatypes on serialization

/*
    uintptr_t ===> It's an unsigned integer type exactly the size of a pointer.
    Whenever you need to do something unusual with a pointer -
    like for example invert all bits (don't ask why) you cast it to uintptr_t
    and manipulate it as a usual integer number, then cast back.
*/

#include <iostream>
#include "serializer.hpp"

int main(void)
{
    Data d;
    d.age = 23;
    d.name = "Amine";

    uintptr_t ptr;

    std::cout << "Data: " << &d << std::endl;
    std::cout << "      name - " << d.name << std::endl;
    std::cout << "      age  - " << d.age << std::endl;

    ptr = serialize(&d);
    Data *d2 = deserialize(ptr);

    std::cout << "Data2: " << d2 << std::endl;
    std::cout << "       name - " << d2->name << std::endl;
    std::cout << "       age  - " << d2->age << std::endl;

    return (0);
}