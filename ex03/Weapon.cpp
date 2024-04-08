/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:55:56 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/08 19:41:40 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
    return(this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon( void ) {
    
    std::cout << "Constructor called" << std::endl;
    return;
}

Weapon::~Weapon( void ) {
    
    std::cout << "Destructor called" << std::endl;
    return;
}

Weapon::Weapon( std::string type )
{
    Weapon::type = type;
    std::cout << "Constructor called and created a weapon type named : " << type << std::endl;
    return;
}