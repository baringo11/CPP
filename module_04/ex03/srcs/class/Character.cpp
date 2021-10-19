/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:11:30 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/19 14:16:45 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string character_name)
{
	this->index = 0;
	this->name = character_name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character( const Character & src )
{
	this->name = src.getName();

	for (int i = 0; i < 4; i++)
		if (src.inventory[i])
			this->inventory[i] = src.inventory[i]->clone();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	this->name = rhs.getName();

	for (int i = 0; i < 4; i++)
		if (rhs.inventory[i])
			this->inventory[i] = rhs.inventory[i];

	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Character::equip(AMateria* m)
{
	if (this->index < 4)
		this->inventory[this->index] = m;
	this->index++;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		this->inventory[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Character::getName() const
{
	return (this->name);
}

/* ************************************************************************** */