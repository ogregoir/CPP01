/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:19:17 by marvin            #+#    #+#             */
/*   Updated: 2024/07/17 10:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA( void ) {
    
    std::cout << "HumanA destructor called" << std::endl;
    return ;
}

HumanA::HumanA(std::string name, Weapon &arm) : arm(arm)
{
    HumanA::name = name;
    std::cout << "HumanA constructor called" << std::endl;
    return ;
}

void    HumanA::Attack()
{
    std::cout << name << " attacks with their " << arm.getType() << std::endl; 
}