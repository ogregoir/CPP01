/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:20:02 by marvin            #+#    #+#             */
/*   Updated: 2024/04/19 15:25:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#pragma once
#include <string>
#include <iostream>

class Zombie {

private :

std::string name;

public :

Zombie(std::string name);
Zombie ( void );
void    announce(void);

~Zombie ( void );
};

Zombie  *zombieHorde(int N, std::string name);

#endif