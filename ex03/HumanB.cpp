/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:19:07 by marvin            #+#    #+#             */
/*   Updated: 2024/07/13 03:24:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : arm(NULL), name("") {
    std::cout << "HumanB constructor called" << std::endl;
}

HumanB::HumanB(std::string name) : arm(NULL), name(name) {
    std::cout << "HumanB name constructor called" << std::endl;
}

void HumanB::setWeapon(Weapon& arm) {
    this->arm = &arm;
}

void HumanB::Attack() {
    if (arm == NULL || arm->getType().empty()) {
        std::cout << name << " can't attack" << std::endl;
    } else {
        std::cout << name << " attacks with their " << arm->getType() << std::endl; 
    }
}

HumanB::~HumanB() {
    std::cout << "HumanB destructor called" << std::endl;
}
