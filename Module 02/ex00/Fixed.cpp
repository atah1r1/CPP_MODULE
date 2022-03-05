/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:11:09 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/05 11:09:47 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8; // asign to a static const member a fixed value

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_number = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

/*
    Returning by value is one of the cases when copy constructor is called. Also AFAIK, 
    this is not always true(returning by value calling copy constructor)
    as some compilers implement return value optimization.
*/


Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_number = obj.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_number;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_number = raw;
}