/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:50:11 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/17 11:33:55 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T *ptr;
    int _size;

public:
    Array<T>() : ptr(NULL), _size(0)
    {
    }
    Array(unsigned int n) : _size(n)
    {
        if (size() <= 0)
        {
            throw std::invalid_argument("Enter a size greater than 0");
        }
        ptr = new T[size()];
        for (int i = 0; i < this->_size; i++)
        {
            ptr[i] = T();
        }
    }
    ~Array<T>()
    {
        if (ptr)
            delete[] ptr;
        ptr = NULL;
    }
    Array<T>(const Array<T> &obj)
    {
        *this = obj;
    }

    unsigned int size(void) const
    {
        return this->_size;
    }

    Array<T> &operator=(const Array<T> &obj)
    {
        if (this->size() == obj.size())
        {
            for (int i = 0; i < this->_size; i++)
                this->ptr[i] = obj.ptr[i];
        }
        else
        {
            this->_size = obj.size();
            this->ptr = new T[obj.size()];
            for (int i = 0; i < this->_size; i++)
            {
                this->ptr[i] = obj.ptr[i];
            }
        }
        return *this;
    }

    T &operator[](int index)
    {
        if (index >= this->_size || index < 0)
        {
            throw std::out_of_range("Array index out of bound !");
        }
        return ptr[index];
    }

    const T &operator[](int index) const
    {
        if (index >= this->_size || index < 0)
        {
            throw std::out_of_range("Array index out of bound !");
        }
        return ptr[index];
    }

    void print(void) const
    {
        for (size_t i = 0; i < this->size(); i++)
            std::cout << this->ptr[i] << " ";
        std::cout << std::endl;
    }
};

#endif