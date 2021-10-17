/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:39:05 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/15 21:56:45 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name_scavtrap) : ClapTrap(name_scavtrap)
{
	std::cout << "Constructor of ScavTrap " << name_scavtrap << " called" << std::endl;
	
	this->energy_points = 50;
	this->hitpoints = 100;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "Copy constructor of ScavTrap called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavTrap " << this->name << " called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &		ScavTrap::operator = ( ScavTrap const & rhs )
{
	name = rhs.name;
	hitpoints = rhs.hitpoints;
	energy_points = rhs.energy_points;
	attack_damage = rhs.attack_damage;

	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::attack(std::string const & target) const
{
	std::cout << "ScavTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << name << " has entered in Gate keeper mode!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */