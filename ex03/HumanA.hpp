/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:20:51 by marvin            #+#    #+#             */
/*   Updated: 2024/04/19 15:20:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#pragma once
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {

private :

Weapon &arm;
std::string name;

public :

HumanA( std::string name, Weapon &arm);
void Attack();
~HumanA ( void );

};

#endif