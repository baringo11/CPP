/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:00:36 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/17 12:39:00 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include "Span.hpp"

int	main( void )
{
	Span sp(4);

	try
	{
		sp.addNumber(15);
		sp.addNumber(1);
		sp.addNumber(8);
		sp.addNumber(18);
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		sp.addNumber(3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
