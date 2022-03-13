/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 09:54:00 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/13 09:58:33 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Default Constructor " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Default Destructor  " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm Parmeterized Constructor " << std::endl;
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm Copy Constructor " << std::endl;
    *this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    std::cout << "PresidentialPardonForm Assignment Operator" << std::endl;
    this->target = obj.target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &b) const
{
    if (this->getIsSigned() == 0)
        throw Form::NotSigned();
    else if (b.getGrade() > this->getGradeToExec())
        throw Bureaucrat::GradeTooLowException();
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;

    // add robotomy failed check
}