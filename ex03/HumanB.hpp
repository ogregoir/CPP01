/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:20:57 by marvin            #+#    #+#             */
/*   Updated: 2024/07/13 03:23:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {

private:
    Weapon* arm;
    std::string name;

public:
    HumanB();
    HumanB(std::string name);
    void setWeapon(Weapon& arm);
    void Attack();                
    ~HumanB();                    
};
