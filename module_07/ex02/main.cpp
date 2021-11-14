/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:00:36 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/14 21:04:45 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	Array<int>			int_array;
	Array<std::string>	str_array(3);
	Array<std::string>	second_str_array;

	str_array[0] = "Hey";
	str_array[1] = "Whats";
	str_array[2] = "Up";
	std::cout << "int_array.size() = " << int_array.size() << std::endl;
	std::cout << "str_array.size() = " << str_array.size() << std::endl;
	second_str_array = str_array;
	second_str_array[1] = "LOLOLOLOLO";

	try
	{
		std::cout << str_array[1] << std::endl;
		std::cout << second_str_array[1] << std::endl;
		std::cout << second_str_array[34] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
