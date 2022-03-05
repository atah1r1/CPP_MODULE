/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 20:43:59 by atahiri           #+#    #+#             */
/*   Updated: 2022/03/05 08:38:10 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

int main(int arc, char *argv[]) 
{
    Student amine("amine", 23);
    Student walid(amine);

    Student abdlali("abdlali", 25);

    abdlali = walid;
    

    // amine.PrintStudent();
    // walid.PrintStudent();
    // abdlali.PrintStudent();
    // amine.PrintStudent();
    return 0;
}