/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:25:47 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/28 15:34:30 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

Student::Student(std::string name) : _name(name)
{
}

Student::~Student()
{
}

std::string Student::getName(void)
{
	return this->_name;
}