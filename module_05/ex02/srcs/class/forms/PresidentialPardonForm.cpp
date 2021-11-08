/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:47:02 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/05 13:49:13 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

 PresidentialPardonForm::PresidentialPardonForm(std::string target) :
 	AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

 PresidentialPardonForm::PresidentialPardonForm( const  PresidentialPardonForm & src ) :
	AForm( src ), _target( src._target )
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

 PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::executeConcreteForm() const
{
		std::cout << this->_target << " has been pardoned by *** Zafod Beeblebrox ***" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */