/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:43:09 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/08 17:58:07 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm *			Intern::makeForm( std::string formName, std::string formTarget )
{
	AForm * ret = NULL;
	AForm * ptrForms[3] =
	{
		new RobotomyRequestForm( formTarget ),
		new PresidentialPardonForm( formTarget ),
		new ShrubberyCreationForm( formTarget )
	};
	for (int i = 0; i < 3; i++)
	{
		if (formName.find(ptrForms[i]->getName()) != std::string::npos)
		{
			ret = ptrForms[i];
			std::cout << "Intern creates " << ret->getName() << std::endl;
		}
		else
			delete ptrForms[i];
	}
	if (ret == NULL)
		throw UnknownFormException();
	return (ret);
}

const char *	Intern::UnknownFormException::what() const throw()
{
	return ("UnknownFormException");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
