/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:20:57 by marvin            #+#    #+#             */
/*   Updated: 2024/07/06 16:38:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {

private :

Weapon *arm;
std::string name;

public :

HumanB( void );
HumanB( std::string name );
void setWeapon(Weapon &arm);
void Attack();
~HumanB ( void );

};
