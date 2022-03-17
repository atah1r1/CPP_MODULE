/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:55:53 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/17 11:35:22 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./iter.hpp"

// class Awesome
// {
// public:
//     Awesome(void) : _n(42) { return; }
//     int get(void) const { return this->_n; }

// private:
//     int _n;
// };
// std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
// {
//     o << rhs.get();
//     return o;
// }
// template <typename T>
// void print(T const &x)
// {
//     std::cout << x << std::endl;
//     return;
// }
// int main()
// {
//     int tab[] = {0, 1, 2, 3, 4};
//     Awesome tab2[5];
//     iter(tab, 5, print);
//     iter(tab2, 5, print);
//     return 0;
// }

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    iter(a, 5, test);

    std::cout << "-----------------------------" << std::endl;

    std::string b[] = {"amine", "hakam", "abdlali"};
    iter(b, 3, test);
    return 0;
}