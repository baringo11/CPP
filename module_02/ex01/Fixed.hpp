/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:10:20 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/13 10:35:55 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>
# include <cmath>

class	Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(int const n);
		Fixed(float const n);
		~Fixed();
		
		Fixed &operator = (Fixed const & rhs);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int	point_value;
		static const int fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

#endif