/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:46:56 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/08 16:58:55 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

 ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
 	AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

 ShrubberyCreationForm::ShrubberyCreationForm( const  ShrubberyCreationForm & src ) :
	AForm( src ), _target( src._target )
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

 ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::executeConcreteForm() const
{
//	std::string const asciiTree;
	std::string const asciiTree[] =
	{
		"	includes/\n"\
		"	|─ main.h\n"\
		"	srcs/\n"\
		"	|─ class/\n"\
		"	|	|─ forms/\n"\
		"	|	|	|─ PresidentialPardonForm.cpp\n"\
		"	|	|	|─ PresidentialPardonForm.hpp\n"\
		"	|	|	|─ RobotomyRequestForm.cpp\n"\
		"	|	|	|─ RobotomyRequestForm.hpp\n"\
		"	|	|	|─ ShrubberyCreationForm.cpp\n"\
		"	|	|	|─ ShrubberyCreationForm.hpp\n"\
		"	|	|─ AForm.cpp\n"\
		"	|	|─ AForm.hpp\n"\
		"	|	|─ Bureaucrat.cpp\n"\
		"	|	|─ Bureaucrat.hpp\n"\
		"	|─ main.cpp\n"\
		"	Makefile\n"
	};

	std::string name = this->_target + "_shrubbery";
	std::ofstream file;
	file.open( name.c_str(), std::ios::trunc );
	if ( !file.is_open() )
		throw ShrubberyCreationForm::FileOpeningException();
	file << asciiTree[0];
	file.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */