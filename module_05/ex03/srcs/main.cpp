/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:08:35 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/08 18:11:49 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main()
{
	std::cout << "\n------------ PRESIDENTIAL PARDON FORM  ------------\n\n";
	try
	{
		Bureaucrat one("one", 5);
		Intern randIntern;
		AForm* form;
		form = randIntern.makeForm("PresidentialPardonForm", "formulario");
		form->beSigned(one);
		form->execute(one);
		delete form;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "\n------------ ROBOTOMY REQUEST FORM  ------------\n\n";
	try
	{
		Bureaucrat one("one", 5);
		Intern randIntern;
		AForm* form;
		form = randIntern.makeForm("RobotomyRequestForm", "formulario2");
		form->beSigned(one);
		form->execute(one);
		delete form;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "\n------------ FAILED FORM  ------------\n\n";
	try
	{
		Bureaucrat one("one", 5);
		Intern randIntern;
		AForm* form;
		form = randIntern.makeForm("adsdasdd", "formulario3");
		form->beSigned(one);
		form->execute(one);
		delete form;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
}