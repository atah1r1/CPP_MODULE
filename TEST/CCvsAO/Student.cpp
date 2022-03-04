/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 20:44:03 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/04 21:51:18 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

Student::Student(std::string name, int age) : _name(name), _age(age)
{
    std::cout << "constructor called" << std::endl;
}

Student::~Student() {
    std::cout << "destructor called" << std::endl;
}

void Student::PrintStudent(void) const {
    std::cout << "Name: " << this->_name << " " << "Age: " << this->_age << std::endl;
}

Student::Student(const Student &obj): _name(obj._name), _age(obj._age)
{
    // *this = obj;
    std::cout << "Copy constructor called" << std::endl;
}

Student::Student &operator=(const Student &obj)
{
    // _name = obj._name;
    // _age = obj._age;
    // return *this;
}