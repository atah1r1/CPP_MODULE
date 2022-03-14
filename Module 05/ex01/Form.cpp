/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 09:54:56 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/13 16:38:02 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : gradeToSign(0), gradeToExec(0)
{
    std::cout << "Form Default Constructor" << std::endl;
    this->is_signed = false;
}
Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec) : name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
    std::cout << "Form Default Constructor" << std::endl;
    this->is_signed = false;
}

Form::~Form()
{
    std::cout << "Form Destructor" << std::endl;
}

Form::Form(const Form &obj) : gradeToSign(obj.gradeToSign), gradeToExec(obj.gradeToExec)
{
    std::cout << "Form Copy Constructor" << std::endl;
    *this = obj;
}

Form &Form::operator=(const Form &obj)
{
    std::cout << "Form Assignment Operator" << std::endl;
    this->is_signed = obj.is_signed;
    return *this;
}

std::string Form::getName(void) const
{
    return this->name;
}
bool Form::getIsSigned(void) const
{
    return this->is_signed;
}
unsigned int Form::getGradeToSign(void) const
{
    return this->gradeToSign;
}
unsigned int Form::getGradeToExec(void) const
{
    return this->gradeToExec;
}

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
    std::cout << "Name: " << obj.getName() << std::endl;
    std::cout << "Is Signed: " << obj.getIsSigned() << std::endl;
    std::cout << "Grade to Sign: " << obj.getGradeToSign() << std::endl;
    std::cout << "Grade to Execute: " << obj.getGradeToExec() << std::endl;
    return (out);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
	{
		std::cout << "This Form can not be signed " << std::endl;
		throw Form::GradeTooLowException();	
	}
	else
	{
		std::cout << "Form signed ! " << std::endl;
		this->is_signed = true;
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "GradeTooHigh";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "GradeTooLow";
}