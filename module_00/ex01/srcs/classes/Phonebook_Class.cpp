/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:49:33 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/05 18:32:54 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/phonebook.h"

Phonebook::Phonebook()
{
	index = 0;
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

int	Phonebook::get_index(void) const
{
	return (this->index);
}

void Phonebook::increment_index(void)
{
	this->index = this->index + 1;
}

void Phonebook::set_index()
{
	this->index = 0;
}
