/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:35:06 by atahiri           #+#    #+#             */
/*   Updated: 2021/12/24 11:19:37 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Sample.class.hpp"


// Sample::Sample(void) {
// 	std::cout << "constructor called" << std::endl;
// }

// Sample::~Sample(void) {
// 	std::cout << "destructor called" << std::endl;
// }

// void	Sample::foo (void) {
// 	std::cout << "Foo called" << std::endl;
// }

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setw(10) << "Hello" << "World\n";
    std::cout << std::setw(10) << "Goodbye" << "World\n";
    return 0;
}