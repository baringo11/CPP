/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:08:35 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/08 17:35:38 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main()
{
	std::cout << "\n------------ PRESIDENTIAL PARDON FORM  ------------\n\n";
	try
	{
		Bureaucrat one("one", 5);
		PresidentialPardonForm form("formulario");
		std::cout << one << std::endl;
		std::cout << form << std::endl;
		form.beSigned(one);
		std::cout << form << std::endl;
		form.execute(one);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n------------ ROBOTOMY REQUEST FORM  ------------\n\n";
	try
	{
		Bureaucrat one("one", 5);
		RobotomyRequestForm form("formulario");
		std::cout << one << std::endl;
		std::cout << form << std::endl;
		form.beSigned(one);
		std::cout << form << std::endl;
		form.execute(one);
		RobotomyRequestForm form2("formulario22");
		form2.execute(one);
		form2.beSigned(one);
		form2.execute(one);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "\n------------ SHRUBBERY CREATION FORM  ------------\n\n";
	try
	{
		Bureaucrat one("one", 5);
		ShrubberyCreationForm form("formulario");
		std::cout << one << std::endl;
		std::cout << form << std::endl;
		form.beSigned(one);
		std::cout << form << std::endl;
		form.execute(one);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "\n------------ EXCEPTION EXECUTING FORM  ------------\n\n";
	try
	{
		Bureaucrat one("one", 142);
		std::cout << one << std::endl;
		ShrubberyCreationForm form("formulario");
		form.beSigned(one);
		std::cout << form << std::endl;
		form.execute(one);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
}