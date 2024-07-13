/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:19:35 by marvin            #+#    #+#             */
/*   Updated: 2024/07/13 02:51:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    
    Zombie::name = name;
    std::cout << "Constructor name called" << std::endl;
    return;
}

Zombie::Zombie( void ) {
    
    std::cout << "Constructor default called" << std::endl;
    return;
}

Zombie::~Zombie( void ) {
    
    std::cout << name << " : Destructor called" << std::endl;
    return;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}