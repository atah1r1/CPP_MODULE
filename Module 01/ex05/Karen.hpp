/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahiri <atahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 08:06:13 by atahiri           #+#    #+#             */
/*   Updated: 2022/02/26 08:08:59 by atahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Karen(void);
    ~Karen();
    void complain(std::string level);
};

#endif