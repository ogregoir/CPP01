/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:19:07 by marvin            #+#    #+#             */
/*   Updated: 2024/04/19 15:19:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &arm)
{
    this->arm = &arm;
}

void    HumanB::Attack()
{
    if (arm->getType().empty())
        std::cout << name << " can't attack" << std::endl;
    else
    std::cout << name << " attacks with their " << arm->getType() << std::endl; 
}

HumanB::HumanB( void ) 
{
    
    std::cout << "Constructor called" << std::endl;
    return;
}

HumanB::HumanB( std::string name ) 
{
    HumanB::name = name;
    this->arm = new Weapon;
    std::cout << "Constructor called" << std::endl;
    return;
}

HumanB::~HumanB( void ) 
{
    std::cout << "Destructor called" << std::endl;
    return;
}
