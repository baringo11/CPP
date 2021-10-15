/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:09:49 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/15 12:05:16 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->point_value = n << this->fractional_bits;
	return ;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->point_value = (int)(roundf(n * (1 << this->fractional_bits)));
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &		Fixed::operator = ( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	point_value = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->point_value);
}

void Fixed::setRawBits(int const raw)
{
	this->point_value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)this->point_value / (float)(1 << this->fractional_bits));
}

int Fixed::toInt(void) const
{
    return ((int)(this->point_value >> this->fractional_bits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &rhs)
{
    out << rhs.toFloat();
    return (out);
}
