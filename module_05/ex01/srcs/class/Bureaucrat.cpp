/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:09:23 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/03 19:49:31 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(const std::string name_bure, int grade) : name(name_bure)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : name(src.getName())
{
	this->grade = src.getGrade();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	this->grade = rhs.getGrade();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::signForm( Form & form ) const
{
	if (form.getIfSigned() == true)
	{
		std::cout << form.getName() << " form is already signed" << std::endl;
	}
	else if(this->grade <= form.getGradeToSign())
	{
		form.setIfSigned();
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	else
		std::cout << this->getName() << " cannot sign " << form.getName() << " because his grade is too low" << std::endl;

}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}

void	Bureaucrat::incrementGrade()
{
	if (this->grade > 1)
		this->grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	if (this->grade < 150)
		this->grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return(this->grade);
}

/* ************************************************************************** */