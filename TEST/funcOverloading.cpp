/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcOverloading.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:19:20 by atahiri           #+#    #+#             */
/*   Updated: 2022/02/26 14:44:00 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}

// function with int type parameter
int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}

int main() {
    
    // call function with int type parameter
    std::cout << "Absolute value of -5 = " << absolute(-5) << std::endl;

    // call function with float type parameter
    std::cout << "Absolute value of 5.5 = " << absolute(5.5f) << std::endl;
    return 0;
}
