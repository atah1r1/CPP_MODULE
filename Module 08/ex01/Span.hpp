/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:02:50 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/18 12:18:34 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::vector<int> vec;

public:
    Span();
    Span(unsigned int n);
    ~Span();
    Span(const Span &obj);            // copy constructor
    Span &operator=(const Span &obj); // assignment operator

    void addNumber(unsigned int n);
    int shortestSpan(void);
    int longestSpan(void);


    template <typename T>
    void addRange(T begin, T end)
    {
        if (this->vec.size() >= this->N)
            throw Span::addMore();
        this->vec.insert(this->vec.end(), begin, end);
    }

    class addMore : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    class notFound : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

#endif