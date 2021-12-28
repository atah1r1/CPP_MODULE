/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:22:51 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/28 15:34:17 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_HPP_
#define STUDENT_HPP_

#include <iostream>
#include <string>

class Student
{
private:
	std::string _name;

public:
	Student(std::string name);
	~Student();
	std::string getName(void);
};


#endif