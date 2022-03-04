/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 20:44:05 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/04 21:41:07 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
private:
    std::string _name;
    int _age;

public:
    Student(std::string name, int age);
    ~Student();
    Student(const Student &obj);
    Student &operator=(const Student &obj);
    void PrintStudent(void) const;
};