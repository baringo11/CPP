/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:10:13 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/10 13:38:41 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog & src ) : Animal()
{
	std::cout << "Copy Dog constructor called" << std::endl;

	this->type = src.getType();
	this->brain = new Brain;
	*this->brain = *src.brain;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
	delete brain;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	this->type = rhs.getType();
	if (this->brain)
	{
		delete this->brain;
		this->brain = new Brain;
		*this->brain = *rhs.brain;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const
{
	std::cout << "guau guau guaaaaaau..." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */