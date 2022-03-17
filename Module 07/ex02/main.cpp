/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:47:49 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/17 11:32:48 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 10

int main(int, char **)
{
    Array<int> numbers(MAX_VAL);
    numbers.print();
    int *mirror = new int[MAX_VAL];
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 10 + 1; // give a number between 1 and 10
        numbers[i] = value;
        mirror[i] = value;
    }
    std::cout << "Print numbers values: " << std::endl;
    numbers.print();
    std::cout << std::endl;
    // //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        
        std::cout << "Print test values: " << std::endl;
        test.print();
        std::cout << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << "Test bad Index: " << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "Test bad Accessor: " << std::endl;
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand() % 10 + 1;
    }
    delete[] mirror; //
    // system("leaks template");
    return 0;
}