/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:01:19 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/05 12:40:38 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8; // asign to a static const member a fixed value

Fixed::Fixed(void)
{
    // std::cout << "Default constructor called" << std::endl;
    this->fixed_number = 0;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    // std::cout << "Copy assignment operator called" << std::endl;
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
    // std::cout << "Int constructor called" << std::endl;
    this->fixed_number = nb << fractional;
}

Fixed::Fixed(const float nb)
{
    // std::cout << "Float constructor called" << std::endl;
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

/*
    Comparaison Operators
*/

bool Fixed::operator>(const Fixed &a) const
{
    return (this->getRawBits() > a.getRawBits());
}

bool Fixed::operator<(const Fixed &a) const
{
    return (this->getRawBits() < a.getRawBits());
}

bool Fixed::operator>=(const Fixed &a) const
{
    return (this->getRawBits() >= a.getRawBits());
}

bool Fixed::operator<=(const Fixed &a) const
{
    return (this->getRawBits() <= a.getRawBits());
}

bool Fixed::operator==(const Fixed &a) const
{
    return (this->getRawBits() == a.getRawBits());
}

bool Fixed::operator!=(const Fixed &a) const
{
    return (this->getRawBits() != a.getRawBits());
}

/*
    Arithmetic operators
*/

Fixed Fixed::operator+(const Fixed &a) const
{
    Fixed obj;
    obj.setRawBits(this->fixed_number + a.getRawBits());
    return (obj);
}

Fixed Fixed::operator-(const Fixed &a) const
{
    Fixed obj;
    obj.setRawBits(this->fixed_number - a.getRawBits());
    return (obj);
}

Fixed Fixed::operator*(const Fixed &a) const
{
    Fixed obj;
    obj.setRawBits(this->fixed_number * a.getRawBits());
    return (obj);
}

Fixed Fixed::operator/(const Fixed &a) const
{
    Fixed obj;
    obj.setRawBits(this->fixed_number / a.getRawBits());
    return (obj);
}
