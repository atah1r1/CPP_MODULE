/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 20:43:59 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/04 21:48:35 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

int main(int arc, char *argv[]) 
{
    Student amine("amine", 17);
    Student walid(amine);

    amine.PrintStudent();
    walid.PrintStudent();
    return 0;
}