/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:16:30 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/03 19:38:22 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name_form, const int grade_sign, const int grade_execute) : 
	name(name_form) , grade_to_sign(grade_sign), grade_to_execute(grade_execute)
{
	this->if_signed = false;
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (grade_to_sign > 150 ||  grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src ) :
	name(src.getName()) , grade_to_sign(src.getGradeToSign()), grade_to_execute(src.getGradeToExecute())
{
	this->if_signed = src.if_signed;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	this->if_signed = rhs.getIfSigned();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	if (i.getIfSigned())
		o << i.getName() << " can be executed with a grade " << i.getGradeToExecute() << " or higher";
	else
		o << i.getName() << " can be signed with a grade " << i.getGradeToSign() << " or higher";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::beSigned(Bureaucrat & bur)
{
	if (bur.getGrade() <= this->grade_to_sign)
		bur.signForm(*this);
	else
		throw Form::GradeTooLowException();
}

const char *		Form::GradeTooHighException::what() const throw()
{
	return ("FormGradeTooHighException");
}

const char *		Form::GradeTooLowException::what() const throw()
{
	return ("FormGradeTooLowException");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getIfSigned() const
{
	return (this->if_signed);
}

void	Form::setIfSigned()
{
	this->if_signed = true;
}

int	Form::getGradeToSign() const
{
	return (this->grade_to_sign);
}

int	Form::getGradeToExecute() const
{
	return (this->grade_to_execute);
}

/* ************************************************************************** */