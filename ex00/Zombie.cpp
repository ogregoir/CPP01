/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:20:21 by marvin            #+#    #+#             */
/*   Updated: 2024/04/19 15:20:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    
    Zombie::name = name;
    std::cout << "Constructor called" << std::endl;
    return;
}

Zombie::Zombie( void ) {
    
    std::cout << "Constructor called" << std::endl;
    return;
}

Zombie::~Zombie( void ) {
    
    std::cout << name << "Destructor called" << std::endl;
    return;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
