/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:08:35 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/03 19:54:47 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main()
{
	try
	{
		Bureaucrat one("one", 42);
		Form formulario("test", 50, 30);
		std::cout << one << std::endl;
		std::cout << formulario << std::endl;
		formulario.beSigned(one);
		std::cout << formulario << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n------------ WRONG FORM ------------\n\n";

	try
	{
		Form formulario("test", 151, 30);
		std::cout << formulario << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n---------- GRADE TOO LOW -----------\n\n";

	try
	{
		Bureaucrat second("second", 101);
		Form formulario2("NewTig", 50, 30);

		std::cout << second << std::endl;
		std::cout << formulario2 << std::endl;
		formulario2.beSigned(second);
		second.signForm(formulario2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
}