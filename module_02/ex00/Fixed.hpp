/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:10:20 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/12 20:21:34 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);
		
		Fixed &	operator = ( Fixed const & rhs );
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int	point_value;
		static const int fractional_bits = 8;
};

#endif