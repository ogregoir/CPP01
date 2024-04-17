/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:38:34 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 18:38:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
    Harl door;
    door.complain("DEBUG");
    door.complain("INFO");
    door.complain("Oceane");
    door.complain("WARNING");
    door.complain("ERROR");
}