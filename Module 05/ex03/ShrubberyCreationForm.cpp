/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 08:33:52 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/13 12:15:15 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Default Destructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm Parmeterized Constructor" << std::endl;
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
    *this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    std::cout << "ShrubberyCreationForm Assignment Operator" << std::endl;
    this->target = obj.target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
    if (this->getIsSigned() == 0)
        throw Form::NotSigned();
    else if (b.getGrade() > this->getGradeToExec())
        throw Bureaucrat::GradeTooLowException();
    std::ofstream outfile(this->target + "_shrubbery");

outfile<<"      _-_        "<<std::endl;  
outfile<<"   /~~   ~~\\    "<<std::endl;
outfile<<"/~~         ~~\\ "<<std::endl;
outfile<<"               } "<<std::endl;
outfile<<"\\  _-     -_  / "<<std::endl; 
outfile<<"  ~  \\ //  ~    "<<std::endl;
outfile<<"- -   | | _- _   "<<std::endl;
outfile<<" _ -  | |   -_   "<<std::endl; 
outfile<<"     // \\       "<<std::endl; 

    outfile.close();
}