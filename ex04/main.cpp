/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:20:19 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/17 10:45:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


std::string ft_replace(size_t	found_pos, size_t start_pos, std::string s1, std::string tmp, std::string replace, std::string s2)
{
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
	if(tmp.find("\n"))
		replace += '\n';
	return(replace);
}

int main(int argc, char **argv)
{
	std::string filename;
	std::string replace;
	std::string	f_ofstream;
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
		return(1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream inputFile(filename.c_str(), std::fstream::in);
	if(!inputFile.is_open())
	{
		 std::cerr << "Error opening file" << std::endl;
		 return(1);
	}
	f_ofstream = filename + ".replace";
	std::ofstream outputFile(f_ofstream.c_str());
	if(!outputFile)
	{
		std::cerr << "Error writing file" << std::endl;
		return(1);
	}
	while (std::getline(inputFile, tmp))
		replace = ft_replace(found_pos, start_pos, s1, tmp, replace, s2);
	std::cout << replace;
	outputFile << replace;
	inputFile.close();
	outputFile.close();
}