/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:04:42 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/05 12:30:50 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie  *zombie;
    int i;

    i = 0;
    zombie = new Zombie[N];
    while (i < N)
    {
        zombie[i] = Zombie(name);
        i++;
    }
    return (zombie);
}