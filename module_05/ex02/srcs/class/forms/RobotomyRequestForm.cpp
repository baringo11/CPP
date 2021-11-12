/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:47:02 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/12 11:43:37 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

 RobotomyRequestForm::RobotomyRequestForm(std::string target) :
 	AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

 RobotomyRequestForm::RobotomyRequestForm( const  RobotomyRequestForm & src ) :
	AForm( src ), _target( src._target )
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

 RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::executeConcreteForm() const
{
	srand(time(NULL));

	std::cout << "BRRRRRRRRR @#~@###@#@#4 DRRRRRRRR" << std::endl;
	if ((1 + (rand() % 3)) == 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " robotomized has failed" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */