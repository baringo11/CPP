/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:41:27 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/18 14:06:23 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template< typename T >
MutantStack<T>::MutantStack()
{
}

template< typename T >
MutantStack<T>::MutantStack( const MutantStack & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template< typename T >
MutantStack<T>::~MutantStack()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
template< typename T >
MutantStack<T> &				MutantStack<T>::operator=( MutantStack<T> const & rhs )
{
	if ( this != &rhs )
	{
	//	this->_value = rhs.getValue();
	}
	return *this;
}

template< typename T >
std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i )
{
	o << "Value = " << i.getValue();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */