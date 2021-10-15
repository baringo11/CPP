/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:34:28 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/15 12:19:57 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "***************\n" << std::endl;
	}
	{
		std::cout << "--- Bigger, smaller, equal, different... ---" << std::endl;
		std::cout << std::endl;

		Fixed n_float(10.125f);
		Fixed n_int(25);
		Fixed n_other_int(-5);
		Fixed n_other_float(10.125f);
		if (n_float > n_int)
			std::cout << n_float << " is bigger than " << n_int << std::endl;
		else
			std::cout << n_float << " isn't bigger than " << n_int << std::endl;
		if (n_float <= n_other_int)
			std::cout << n_float << " is smaller or equal than " << n_int << std::endl;
		else
			std::cout << n_other_int << " is smaler than " << n_float << std::endl;
		if (n_float != n_other_float)
			std::cout << n_float << " is not equal than " << n_other_float << std::endl;
		else
			std::cout << n_other_float << " is equal than " << n_float << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "--- Addition, substraction, multiplication and division ---" << std::endl;
		std::cout << std::endl;

		Fixed n_float(12.12f);
		Fixed n_other_float(8.5f);
		Fixed n_int(1000);
		Fixed n_other_int(30);

		std::cout << n_other_int << " + " << n_float << " = " << n_other_int + n_float << std::endl;
		std::cout << n_int << " - " << n_other_float << " = " << n_int - n_other_float << std::endl;
		std::cout << n_other_float << " * " << n_float << " = " << n_other_float * n_float << std::endl;
		std::cout << n_int << " / " << n_other_int << " = " << n_int / n_other_int << std::endl;

		std::cout << std::endl;
	}
	return 0;
}
