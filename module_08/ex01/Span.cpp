/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:16:43 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/19 12:43:44 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <iterator>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : len(0)
{
}

Span::Span(unsigned int n) : len(n)
{
	
}

Span::Span( const Span & src ) : len(src.getLen())
{
	this->numbers = src.numbers;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->len = rhs.getLen();
		this->numbers = rhs.numbers;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	o << "Value = " << i.getLen();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int n)
{
	if (numbers.size() == len)
		throw std::out_of_range("Cannot add any more numbers");
	this->numbers.push_back(n);
}

void	Span::addRandomNumbers(int n_elements)
{
	srand (time(NULL));
	for (int i = 0; i < n_elements; i++)
		this->addNumber(rand());
}

int				Span::shortestSpan(void) const
{
	std::vector<int>	tmp = this->numbers;
	std::vector<int>::iterator	it;
	int	span;

	if (this->numbers.size() <= 1)
		throw std::logic_error("Not enought numbers to find span");

	std::sort(tmp.begin(), tmp.end());

	it = tmp.begin() + 1;
	for (span = *it - *tmp.begin() ; it != tmp.end() - 1 ; it++)
	{
		if (*(it+1) - *it < span)
			span = *(it+1) - *it;
	}
	return span;
}

int				Span::longestSpan(void) const
{
	std::vector<int>	tmp = this->numbers;

	if (this->numbers.size() <= 1)
		throw std::logic_error("Not enought numbers to find span");
	
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int Span::getLen() const
{
	return (this->len);
}

/* ************************************************************************** */