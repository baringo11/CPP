/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:39:33 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/19 12:42:10 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(std::string const & type_mat)
{
	std::cout << "Default AMateria constructor called" << std::endl;
	this->type = type_mat;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/
/*
AMateria::~AMateria()
{
	std::cout << "Default AMateria destructor called" << std::endl;
}
*/
/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	this->type = rhs.getType();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AMateria const & i )
{
	o << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void AMateria::use(ICharacter& target)
{
	std::cout << "No materia to use against " << target.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & AMateria::getType() const
{
	return (this->type);
}

/* ************************************************************************** */