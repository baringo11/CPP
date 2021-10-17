/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:20:25 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/17 18:32:08 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor of DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name_Diamondtrap) : ClapTrap(name_Diamondtrap + "_clap_name"), ScavTrap(name_Diamondtrap), FragTrap(name_Diamondtrap)
{
	std::cout << "Constructor of DiamondTrap " << name_Diamondtrap << " called" << std::endl;

	this->name_diamond = name_Diamondtrap;
	this->energy_points = ScavTrap::energy_points;
	this->hitpoints = FragTrap::hitpoints;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "Copy constructor of DiamondTrap called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor of DiamondTrap " << this->name_diamond << " called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	name = rhs.name;
	name_diamond = rhs.name_diamond;
	hitpoints = rhs.hitpoints;
	energy_points = rhs.energy_points;
	attack_damage = rhs.attack_damage;

	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	DiamondTrap::attack(std::string const & target) const
{
	this->ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI() const
{
	std::cout << "I am " << name_diamond << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */