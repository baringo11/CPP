/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:33:08 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/10 01:08:25 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
	this->type = weapon_type;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const std::string &Weapon::getType(void) const
{
	return(this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}