/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:00:36 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/19 13:06:15 by jbaringo         ###   ########.fr       */
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
	Span sp2(1000);

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
	std::cout << "\n-----------------\n" << std::endl;
	try
	{
		sp2.addRandomNumbers(1000);
		std::cout << "longestSpan: " << sp2.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
