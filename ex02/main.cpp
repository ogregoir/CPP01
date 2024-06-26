/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:37:48 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/06 14:15:02 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cctype>
#include <cstring>
#include <iostream>

int ft_strlen(std::string str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main (void)
{
    std::string     str;
    std::string     *stringPTR;
    std::string     &stringREF = str;
    
    str = new char[ft_strlen(str) +1];
    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    std::cout << "Adresse memoire str : " << &str << std::endl;
    std::cout << "Adresse memoire stringPTR : " << stringPTR << std::endl;
    std::cout << "Adresse memoire stringREF : " << &stringREF << std::endl;
    std::cout << "Valeur str : " << str << std::endl;
    std::cout << "Valeur *stringPTR : " << *stringPTR << std::endl;
    std::cout << "Valeur stringREF : " << stringREF << std::endl;
}