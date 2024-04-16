/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:20:19 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/13 05:52:02 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string filename;
	std::string replace;
	std::string	tmp;
	std::string s1;
	std::string s2;
	size_t      start_pos;
	size_t      found_pos;
	
	found_pos = 0;
	start_pos = 0;
	if(argc != 4)
	{
		std::cerr << "invalid argument counts" << std::endl;
		return(0);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream inputFile(filename, std::fstream::in);
	if(!inputFile.is_open())
	{
		 std::cerr << "Error opening file" << std::endl;
		 return(0);
	}
	std::ofstream outputFile((filename + ".replace"));
	if(!outputFile)
	{
		std::cerr << "Error writing file" << std::endl;
		return(0);
	}
	while (std::getline(inputFile, tmp))
	{
		if (found_pos == std::string::npos)
			replace += '\n';
		start_pos = 0;
		found_pos = tmp.find(s1);
		while (found_pos != std::string::npos)
		{
			replace += tmp.substr(start_pos, found_pos - start_pos);
			replace += s2;
			start_pos =  found_pos + s1.size();
			found_pos = tmp.find(s1, start_pos);
		}
		replace += tmp.substr(start_pos);
	}
	std::cout << replace << std::endl;
	outputFile << replace;
	inputFile.close();
}