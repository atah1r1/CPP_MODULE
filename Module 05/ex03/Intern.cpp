/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:21:23 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/13 16:23:17 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// typedef void (Intern::*my_pointer_to_func)(void);

Intern::Intern(void)
{
    std::cout << "Intern Default Constructor" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor" << std::endl;
}

const char *Intern::invalidForm::what() const throw()
{
    return "Form not found!";
}

Form *Intern::makeForm(std::string form, std::string target)
{
    size_t i = 0;
    std::string requests[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    Form *(Intern::*fct[])(std::string) = {&Intern::RobotomyRequest, &Intern::ShrubberyCreation, &Intern::PresidentialPardon};
    for (i = 0; i < 3; i++)
    {
        if (form == requests[i])
        {
            std::cout << "Intern creates " << requests[i] << std::endl;
            break;
        }
    }
    if (i == 3)
        throw Intern::invalidForm();
    return (this->*fct[i])(target);
}

Form *Intern::RobotomyRequest(std::string target)
{
    RobotomyRequestForm *ret = new RobotomyRequestForm(target);
    return ret;
}

Form *Intern::PresidentialPardon(std::string target)
{
    PresidentialPardonForm *ret = new PresidentialPardonForm(target);
    return ret;
}

Form *Intern::ShrubberyCreation(std::string target)
{
    ShrubberyCreationForm *ret = new ShrubberyCreationForm(target);
    return ret;
}