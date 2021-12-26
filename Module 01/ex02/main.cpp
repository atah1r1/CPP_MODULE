/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 12:40:29 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/26 13:16:46 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* 
	A pointer in C++ is a variable that holds the memory address of another variable.
 	A reference is an alias for an already existing variable. Once a reference is initialized to a variable,
	it cannot be changed to refer to another variable. Hence, a reference is similar to a const pointer.
*/

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of the  str: " << &str << std::endl;
	std::cout << "Address by using stringPTR: " << stringPTR << std::endl;
	std::cout << "Address by using stringREF: " << &stringREF << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << "String using pointer: " << *stringPTR << std::endl;
	std::cout << "String using reference: " << stringREF << std::endl;
	return (0);
}