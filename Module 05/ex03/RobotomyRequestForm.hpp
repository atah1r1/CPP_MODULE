/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 09:39:49 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/13 09:40:33 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_HPP
#define ROBOTOMY_REQUEST_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string target;

public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &obj);            // copy constructor
    RobotomyRequestForm &operator=(const RobotomyRequestForm &obj); // assignment operator

    void execute(Bureaucrat const &executor) const;
};

#endif