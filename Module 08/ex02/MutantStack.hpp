/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:55:41 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/18 14:09:41 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
// #include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
    /* data */
public:
    typedef typename T::iterator iterator;
    MutantStack(){};
    ~MutantStack(){};
    MutantStack(const MutantStack &obj)
    {
        *this = obj;
    }
    MutantStack &operator=(const MutantStack &obj)
    {
        this->c = obj.c;
        return *this;
    }
    iterator begin(void)
    {
        return this->c.begin();
    }
    iterator end(void)
    {
        return this->c.end();
    }
};

#endif