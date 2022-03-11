/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:55:06 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/11 19:02:55 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : name(name)
{
    std::cout << "Bureaucrat Parameterized Constructor" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    std::cout << "Bureaucrat Copy Constructor" << std::endl;
    *this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    std::cout << "Bureaucrat Assignment Operator" << std::endl;
    this->grade = obj.grade;
    return *this;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj)
{
    std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (out);
}

std::string Bureaucrat::getName(void) const
{
    return (this->name);
}

unsigned int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void Bureaucrat::decrement(void)
{
    if (this->grade > 149)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    this->grade++;
}

void Bureaucrat::increment(void)
{
    if (this->grade < 2)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    this->grade--;
}

void Bureaucrat::beSigned(Form &form)
{
    try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << this->getName() << " cannot sign "<< form.getName() << " because " ;
		if (this->getGrade() > form.getGradeToSign())
			std::cout << "the grade is too low";
		if (this->getGrade() < form.getGradeToSign())
			std::cout << "the grade is too high";
		std::cout << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "GradeTooHigh";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "GradeTooLow";
}