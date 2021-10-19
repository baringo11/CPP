/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:25:53 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/19 14:25:54 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->learn[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for (int i = 0; i < 4; i++)
		if (src.learn[i])
			this->learn[i] = src.learn[i];
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->learn[i] != NULL)
			delete this->learn[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	for (int i = 0; i < 4; i++)
		if (rhs.learn[i])
			this->learn[i] = rhs.learn[i];
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* materia)
{
	int i;

	for(i = 0; i < 4; i++)
		if (this->learn[i] == NULL)
			break;

	if (i < 4)
		this->learn[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->learn[i] != NULL && this->learn[i]->getType() == type)
			return (this->learn[i]->clone());
	}
	return (0);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */