/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:09:49 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/15 12:10:00 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : point_value(0)
{
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const n)
{
//	std::cout << "Int constructor called" << std::endl;
	this->point_value = n << this->fractional_bits;
	return ;
}

Fixed::Fixed(float const n)
{
//	std::cout << "Float constructor called" << std::endl;
	this->point_value = (int)(roundf(n * (1 << this->fractional_bits)));
	return ;
}

Fixed::Fixed(Fixed const &src)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
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

/*****************************************/
/************** OPERATORS ****************/
/*****************************************/

Fixed &Fixed::operator = ( Fixed const &rhs )
{
//	std::cout << "Assignation operator called" << std::endl;
	this->point_value = rhs.getRawBits();

	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &rhs)
{
    out << rhs.toFloat();
    return (out);
}

Fixed Fixed::operator + (Fixed const & rhs) const
{
	Fixed ret;

	ret.setRawBits(this->point_value + rhs.getRawBits());
	return (ret);
}

Fixed Fixed::operator - (Fixed const & rhs) const
{
	Fixed ret;

	ret.setRawBits(this->point_value - rhs.getRawBits());
	return (ret);
}

Fixed Fixed::operator * (Fixed const & rhs) const
{
	Fixed ret;

	ret.setRawBits((this->point_value * rhs.getRawBits()) >> this->fractional_bits);
	return (ret);
}

Fixed Fixed::operator / (Fixed const & rhs) const
{
	Fixed ret;

	ret.setRawBits((this->point_value / rhs.getRawBits()) << this->fractional_bits);
	return (ret);
}

Fixed &Fixed::operator ++ (void)
{
	this->point_value++;

	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed ret(*this);

	this->point_value++;
	return (ret);
}

Fixed &Fixed::operator -- (void)
{
	this->point_value--;
	return (*this);
}

Fixed Fixed::operator -- (int)
{
	Fixed ret(*this);

	this->point_value--;
	return (ret);
}

/*****************************************/
/********* COMPARAISON OPERATORS *********/
/*****************************************/

bool Fixed::operator > (Fixed const & rhs) const 
{
	return (this->point_value > rhs.getRawBits()); 
}

bool Fixed::operator < (Fixed const & rhs) const
{
	return (this->point_value < rhs.getRawBits()); 
}

bool Fixed::operator >= (Fixed const & rhs) const
{
	return (this->point_value >= rhs.getRawBits()); 
}

bool Fixed::operator <= (Fixed const & rhs) const
{
	return (this->point_value <= rhs.getRawBits()); 
}

bool Fixed::operator == (Fixed const & rhs) const
{
	return (this->point_value == rhs.getRawBits()); 
}

bool Fixed::operator != (Fixed const & rhs) const
{
	return (this->point_value != rhs.getRawBits()); 
}

Fixed &Fixed::min(Fixed &val1, Fixed &val2)
{
	if (val1 < val2)
		return (val1);
	else
		return (val2);	
}

Fixed &Fixed::max(Fixed &val1, Fixed &val2)
{
	if (val1 > val2)
		return (val1);
	else
		return (val2);	
}

const Fixed &Fixed::min(const Fixed &val1, const Fixed &val2) 
{ 
	if (val1 < val2)
		return (val1);
	else
		return (val2);
}
const Fixed &Fixed::max(const Fixed &val1, const Fixed &val2) 
{ 
	if (val1 > val2)
		return (val1);
	else
		return (val2);
}
