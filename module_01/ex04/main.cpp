/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:34:28 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/13 19:50:37 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	check_open(std::ifstream *in_file, std::ofstream *out_file, std::string f)
{
	if (in_file && !in_file->is_open())
	{
		std::cerr << "Error opening '" << f << "'" << std::endl;
		exit(-1);
	}
	else if (out_file && !out_file->is_open())
	{
		std::cerr << "Error opening '" << f << "'" << std::endl;
		exit(-1);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	size_t i;

	if (argc != 4)
	{
		std::cout << "Error, wrong number of arguments" << std::endl;
		return (-1);
	}
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	if (!s1.compare("") || !s2.compare(""))
	{
		std::cout << "Error, empty strings" << std::endl;
		return (-1);
	}
	std::string		str = argv[1];
	std::ifstream	file(argv[1]);
	check_open(&file, NULL, str);
	std::ofstream	replace_file(str.append(".replace"));
	check_open(NULL, &replace_file, str);
	while (getline(file, str))
	{
		while ((i = str.find(s1)) != std::string::npos)
		{
			str.erase(i, s1.length());
			str.insert(i, s2);
		}
		replace_file << str << std::endl;
	}
	file.close();
	replace_file.close();
	return (0);
}
