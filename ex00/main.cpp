/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:20:13 by marvin            #+#    #+#             */
/*   Updated: 2024/07/17 10:25:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie2;
    Zombie  zombie("FOO");

    zombie.announce();
    zombie2 = newZombie("BIIIE");
    zombie2->announce();
    randomChump("BOOOOO");
    
    delete zombie2;
    return(0);
}
