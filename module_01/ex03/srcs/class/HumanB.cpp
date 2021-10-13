/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:10:44 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/13 19:41:18 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->_weapon = NULL;
	return ;
}
HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << this->name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with his best intention but doesn't have a weapon -_-" << std::endl;
}