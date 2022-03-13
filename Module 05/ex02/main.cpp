/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:54:54 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/13 10:00:45 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    {
        std::cout << "\n--- Test For Shrubbery Form ---\n"
                  << std::endl;
        try
        {
            Bureaucrat b("bur1", 100);
            ShrubberyCreationForm sh("target");
            sh.execute(b);
            sh.beSigned(b);
            std::cout << "Before decrementing : " << b << std::endl;
            b.decrement();
            std::cout << "After decrementing : " << b << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << "\n--- Test For Robotomy Form ---\n"
                  << std::endl;
        try
        {
            Bureaucrat b("bur1", 76);
            RobotomyRequestForm rb("target");
            b.signForm(rb);
            rb.beSigned(b);
            std::cout << "Before incrementing : " << b << std::endl;
            b.increment();
            std::cout << "After incrementing : " << b << std::endl;
            rb.execute(b);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << "\n--- Test For Presidential Form ---\n"
                  << std::endl;
        try
        {
            Bureaucrat b("bur1", 136);
            PresidentialPardonForm p("target");
            p.execute(b);
            p.beSigned(b);
            std::cout << "Before decrementing : " << b << std::endl;
            b.decrement();
            std::cout << "After decrementing : " << b << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}