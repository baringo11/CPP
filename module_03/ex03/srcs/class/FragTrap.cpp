/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:20:25 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/15 22:31:04 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
	std::cout << "Default constructor of FragTrap called" << std::endl;

}

FragTrap::FragTrap(std::string name_fragtrap) : ClapTrap(name_fragtrap)
{
	std::cout << "Constructor of FragTrap " << name_fragtrap << " called" << std::endl;

	this->energy_points = 100;
	this->hitpoints = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "Copy constructor of FragTrap called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap " << this->name << " called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
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

void	FragTrap::attack(std::string const & target) const
{
	std::cout << "FragTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::highFiveGuys(void) const
{
	std::cout << "FragTrap " << name << " request someone to high fives!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */