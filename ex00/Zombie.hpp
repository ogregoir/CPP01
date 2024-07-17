/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:20:26 by marvin            #+#    #+#             */
/*   Updated: 2024/07/17 10:17:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie {

private :

    std::string name;

public :

    Zombie();
    Zombie(std::string name);
    void    announce(void);
    ~Zombie();
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);
