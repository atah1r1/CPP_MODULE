/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 09:02:30 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/05 12:46:00 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    float a = 5.05 * 2;
    
    std::cout << a * (1 << 8) << std::endl;
}