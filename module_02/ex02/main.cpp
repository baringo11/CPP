/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:34:28 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/13 18:28:59 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(int argc, char **argv)
{
	Fixed a;
//	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

//	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
//	std::cout << a << std::endl;
	std::cout << "\n MAIN POST operator ++ " << std::endl;
//	std::cout << a++ << std::endl;
	Fixed b(a++);
	std::cout << "FINISH MAIN POST operator ++	\n " << std::endl;

	std::cout << a << std::endl;

//	std::cout << b << std::endl;

//	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
