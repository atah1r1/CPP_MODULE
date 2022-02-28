/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:11:09 by atahiri           #+#    #+#             */
/*   Updated: 2022/02/28 15:25:54 by atahiri          ###   ########.fr       */
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

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->fixed_number = obj.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_number;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_number = raw;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_number = nb << fractional;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_number = roundf(nb * (1 << fractional));
}

float Fixed::toFloat(void) const
{
    return ((float)(this->fixed_number) / (1 << fractional));
}

int Fixed::toInt(void) const
{
    return ((int)(this->fixed_number >> fractional));
}

std::ostream &operator<<(std::ostream &output, const Fixed &obj)
{
    output << obj.toFloat();
    return output;
}