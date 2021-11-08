/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:16:30 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/03 19:38:22 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm(std::string name_AForm, const int grade_sign, const int grade_execute) : 
	name(name_AForm) , grade_to_sign(grade_sign), grade_to_execute(grade_execute)
{
	this->if_signed = false;
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw AForm::GradeTooHighException();
	if (grade_to_sign > 150 ||  grade_to_execute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm & src ) :
	name(src.getName()) , grade_to_sign(src.getGradeToSign()), grade_to_execute(src.getGradeToExecute())
{
	this->if_signed = src.if_signed;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	this->if_signed = rhs.getIfSigned();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
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

void	AForm::beSigned(Bureaucrat & bur)
{
	if (bur.getGrade() <= this->grade_to_sign)
		bur.signForm(*this);
	else
		throw AForm::GradeTooLowException();
}

void				AForm::execute( Bureaucrat const & executor ) const
{
	if (this->getIfSigned() == false)
	{
		std::cout << "Form needs to be signed in order to be executed" << std::endl;
	}
	else if (executor.getGrade() <= this->getGradeToExecute())
	{
		executor.executeForm(*this);
		executeConcreteForm();
	}
	else
		throw AForm::GradeTooLowException();
}

const char *		AForm::GradeTooHighException::what() const throw()
{
	return ("AFormGradeTooHighException");
}

const char *		AForm::GradeTooLowException::what() const throw()
{
	return ("AFormGradeTooLowException");
}

const char *		AForm::FileOpeningException::what() const throw()
{
	return ("FileOpeningException");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	AForm::getName() const
{
	return (this->name);
}

bool	AForm::getIfSigned() const
{
	return (this->if_signed);
}

void	AForm::setIfSigned()
{
	this->if_signed = true;
}

int	AForm::getGradeToSign() const
{
	return (this->grade_to_sign);
}

int	AForm::getGradeToExecute() const
{
	return (this->grade_to_execute);
}

/* ************************************************************************** */