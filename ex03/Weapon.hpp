/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:21:06 by marvin            #+#    #+#             */
/*   Updated: 2024/07/05 17:57:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon {

private :

std::string type;

public :

Weapon( void );
Weapon( std::string type );
const std::string& getType();
void  setType(std::string type);
~Weapon ( void );

};
