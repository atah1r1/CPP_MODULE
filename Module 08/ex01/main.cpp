/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:02:28 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/18 12:21:39 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int RandomNumber(void) { return std::rand() % 100; };

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try
    {
        sp.addNumber(44);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    {
        std::vector<int> vec(100, 0);
        std::generate(vec.begin(), vec.end(), RandomNumber);
        Span sp1 = Span(100);
        sp1.addRange(vec.begin(), vec.end());
        std::cout << sp1.longestSpan() << std::endl;
        std::cout << sp1.shortestSpan() << std::endl;
    }

    return 0;
}