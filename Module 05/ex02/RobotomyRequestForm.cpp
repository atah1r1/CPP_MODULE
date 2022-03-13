/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 09:39:44 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/13 09:53:48 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Default Constructor " << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Default Destructor  " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm Parmeterized Constructor " << std::endl;
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm Copy Constructor " << std::endl;
    *this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    std::cout << "RobotomyRequestForm Assignment Operator" << std::endl;
    this->target = obj.target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &b) const
{
    if (this->getIsSigned() == 0)
        throw Form::NotSigned();
    else if (b.getGrade() > this->getGradeToExec())
        throw Bureaucrat::GradeTooLowException();
    std::cout << this->target << " has been robotomized successfully 50% of the time." << std::endl;

    // add robotomy failed check
}