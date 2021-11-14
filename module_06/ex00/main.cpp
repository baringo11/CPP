/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:16:32 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/09 19:09:30 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>

void	type_double(std::string str)
{
	double const d = static_cast<double const>(stod(str));
	int const i = static_cast<int const>(d);

	std::cout << "char: ";
	if (i == 127 || (i >= 0 && i <= 31))
		std::cout << "Non displayable" << std::endl;
	else if (i > 31 && i < 127)
		std::cout << "'" << static_cast<char const>(d) << "'" << std::endl;
	else
		std::cout << "impossible" << std::endl;

	if (i > std::numeric_limits<int>::min() && i < std::numeric_limits<int>::max())
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	if (d - i == 0)
		std::cout << "float: " << d << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float const>(d) << "f" << std::endl;

	if (d - i == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	type_float(std::string str)
{
	float const f = static_cast<float const>(stof(str));
	int const i = static_cast<int const>(f);

	std::cout << "char: ";
	if (i == 127 || (i >= 0 && i <= 31))
		std::cout << "Non displayable" << std::endl;
	else if (i > 31 && i < 127)
		std::cout << "'" << static_cast<char const>(f) << "'" << std::endl;
	else
		std::cout << "impossible" << std::endl;

	if (i > std::numeric_limits<int>::min() && i < std::numeric_limits<int>::max())
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	if (f - i == 0)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;

	if (f - i == 0)
		std::cout << "double: " << f << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double const>(f) << std::endl;
}

void	type_int(std::string str)
{
	int	const i = static_cast<int const>(std::stoi(str));

	std::cout << "char: ";
	if (i == 127 || (i >= 0 && i <= 31))
		std::cout << "Non displayable" << std::endl;
	else if (i > 31 && i < 127)
		std::cout << "'" << static_cast<char const>(i) << "'" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float const>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double const>(i) << ".0" << std::endl;
}

void	type_char(std::string str)
{
	char const c = static_cast<char const>(str[0]);
	std::cout << "char: '" << c << "'" <<std::endl;
	std::cout << "int: " << static_cast<int const>(c) << std::endl;
	std::cout << "float: " << static_cast<float const>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double const>(c) << ".0" << std::endl;
}

int	main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
		{
			std::cout << "Wrong number of parameters" << std::endl;
			return (-1);
		}
		std::string const str = static_cast<std::string const>(argv[1]);

		if (str.size() == 1 && (str[0] < 48 || str[0] > 57))
			type_char(str);
		else if (str.find(".") == std::string::npos && str.find("n") == std::string::npos)
			type_int(str);
		else if (str[str.size() - 1] == 'f' && str != "-inf" && str != "+inf")
			type_float(str);
		else
			type_double(str);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << ": error: wrong parameter\n";
	}
}