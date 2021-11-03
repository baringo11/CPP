/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:08:35 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/03 18:03:10 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat one("one", 42);
		std::cout << one << std::endl;
		one.decrementGrade();
		std::cout << one << std::endl;
		one.incrementGrade();
		std::cout << one << std::endl;
		Bureaucrat second("second", 1);
		std::cout << second << std::endl;
		second.incrementGrade();
		std::cout << "not printed" << std::endl;

	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n-----------------------\n\n";

	try
	{
		Bureaucrat third("third", 150);
		std::cout << third << std::endl;
		third.decrementGrade();
		std::cout << third << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}