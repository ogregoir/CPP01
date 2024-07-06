/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:20:26 by marvin            #+#    #+#             */
/*   Updated: 2024/07/05 17:40:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie {

private :

std::string name;

public :

Zombie(std::string name);
Zombie();
void    announce(void);

~Zombie ( void );
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);
