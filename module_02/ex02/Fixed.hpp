/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:10:20 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/13 18:02:14 by jbaringo         ###   ########.fr       */
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

		bool operator > (Fixed const & rhs) const;
		bool operator < (Fixed const & rhs) const;
		bool operator >= (Fixed const & rhs) const;
		bool operator <= (Fixed const & rhs) const;
		bool operator == (Fixed const & rhs) const;
		bool operator != (Fixed const & rhs) const;

		Fixed operator + (Fixed const & rhs) const;
		Fixed operator - (Fixed const & rhs) const;
		Fixed operator * (Fixed const & rhs) const;
		Fixed operator / (Fixed const & rhs) const;
		Fixed &operator ++ (void); //pre
		Fixed operator ++ (int);   //post
		Fixed &operator -- (void); 
		Fixed operator -- (int);

		static Fixed &min(Fixed &val1, Fixed &val2);
		static const Fixed &min(Fixed const &val1, Fixed const &val2);
		static Fixed &max(Fixed &val1, Fixed &val2);
		static const Fixed &max(Fixed const &val1, Fixed const &val2);

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