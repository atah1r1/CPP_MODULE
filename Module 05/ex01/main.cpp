/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:54:54 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/11 09:46:32 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    {
        std::cout << std::endl;
        std::cout << "--- FIRST TEST ---" << std::endl;
        std::cout << std::endl;
        try
        {
            Bureaucrat Amine("Amine", 149);
            Amine.decrement();
            std::cout << Amine << std::endl;
            Amine.decrement();
            std::cout << Amine << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl;
        std::cout << "--- SECOND TEST ---" << std::endl;
        std::cout << std::endl;
        try
        {
            Bureaucrat Walid("Walid", 2);
            Walid.increment();
            std::cout << Walid << std::endl;
            Walid.increment();
            std::cout << Walid << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    return 0;
}