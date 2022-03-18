/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:02:47 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/18 12:19:37 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n)
{
    this->N = n;
}

Span::~Span() {}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span &Span::operator=(const Span &obj)
{
    this->N = obj.N;
    return *this;
}

void Span::addNumber(unsigned int n)
{
    if (this->vec.size() >= this->N)
    {
        throw Span::addMore();
    }
    this->vec.push_back(n);
}

int Span::longestSpan(void)
{
    if (this->vec.size() <= 1)
    {
        throw Span::notFound();
    }
    std::sort(this->vec.begin(), this->vec.end());
    return (this->vec.back() - this->vec.front());
}

int Span::shortestSpan(void)
{
    int diff;
    int shortestSpan = -1;

    if (this->vec.size() <= 1)
    {
        throw Span::notFound();
    }
    std::sort(this->vec.begin(), this->vec.end());
    shortestSpan = this->vec[1] - this->vec[0];
    for (int i = 0; i < (int)this->vec.size() - 1; i++)
    {
        diff = this->vec[i + 1] - this->vec[i];
        if (diff < shortestSpan)
            shortestSpan = diff;
    }
    return shortestSpan;
}

const char *Span::addMore::what() const throw()
{
    return "Can't add more !";
}

const char *Span::notFound::what() const throw()
{
    return "Not found !";
}