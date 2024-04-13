/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:29:58 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/12 14:25:29 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.Attack();
    club.setType("some other type of club");
    bob.Attack();
    HumanB jim("Jim");
    jim.Attack();
    jim.setWeapon(club);
    club.setType("rocket");
    jim.Attack();
    return (0);
}
