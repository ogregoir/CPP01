/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:37:48 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/17 11:40:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cctype>
#include <cstring>
#include <iostream>

int main (void)
{
    std::string     str;
    std::string     *stringPTR;
    std::string     &stringREF = str;
    
    str = "HI THIS IS BRAIN";
    
    stringPTR = &str;
    std::cout << "Adresse memoire str : " << &str << std::endl;
    std::cout << "Adresse memoire stringPTR : " << stringPTR << std::endl;
    std::cout << "Adresse memoire stringREF : " << &stringREF << std::endl;
    std::cout << "Valeur str : " << str << std::endl;
    std::cout << "Valeur *stringPTR : " << *stringPTR << std::endl;
    std::cout << "Valeur stringREF : " << stringREF << std::endl;
}