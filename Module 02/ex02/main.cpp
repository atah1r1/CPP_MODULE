/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:01:14 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/05 12:42:13 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    // Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    std::cout << b << std::endl;
    // std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}