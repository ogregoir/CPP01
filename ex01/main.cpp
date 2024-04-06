/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:04:15 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/05 12:32:51 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *horde1;
    Zombie  *horde2;
    int     i;

    i = 0;
    horde1 = zombieHorde(5, "ZOOOOOOOOM");
    horde2 = zombieHorde(7, "BIIIIIIIIE");
    while (i != 4)
    {
        horde1[i].announce();
        i++;
    }
    i = 0;
    while (i != 6)
    {
        horde2[i].announce();
        i++;
    }
    delete [] horde1;
    delete [] horde2;
}
