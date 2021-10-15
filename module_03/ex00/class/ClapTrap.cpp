/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:28:22 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/15 22:08:54 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(std::string name_claptrap)
{
	std::cout << "Constructor of ClapTrap " << name_claptrap << " called" << std::endl;
	this->name = name_claptrap;
	this->energy_points = 10;
	this->hitpoints = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	name = rhs.name;
	hitpoints = rhs.hitpoints;
	energy_points = rhs.energy_points;
	attack_damage = rhs.attack_damage;
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << i.getHitPoints();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " received " << amount << " points of damage :(";
	this->hitpoints -= amount;
	if (this->hitpoints < 0)
	{
		this->hitpoints = 0;
		std::cout << " and has died... :´(" << std::endl;
	}
	else
		std::cout << ", but still has " << this->hitpoints << " hitpoints!" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitpoints += amount;
	std::cout << "ClapTrap " << this->name << " repaired " << amount << " hitpoints, now it has " << this->hitpoints << "! :)" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int	ClapTrap::getHitPoints(void) const
{
	return (this->hitpoints);
}

/* ************************************************************************** */