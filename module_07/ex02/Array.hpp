/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:44:29 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/14 20:18:41 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template< typename T > 
class Array
{
	public:
		Array<T>(): array(NULL), len(0)
		{
			std::cout << "Default constructor called" << std::endl;
		};
		Array<T>(unsigned int n) : len(n)
		{
			std::cout << n << " size constructor called" << std::endl;
			if (n < 0)
				throw std::overflow_error("Wrong Index");
			this->array = new T[n];
		};
		Array<T>(const Array<T> &src)
		{
			std::cout << "Copy constructor called" << std::endl;
			*this = src;
		};
		~Array<T>()
		{
			std::cout << "Default destructor called" << std::endl;
			if (this->len > 0)
				delete [] this->array;
		};
		Array<T>	&operator=(const Array<T> &rhs)
		{
			std::cout << "Assignation overload called" << std::endl;
			if (this == &rhs)
				return *this;
			if (this->len > 0)
				delete [] this->array;
			this->len = rhs.size();
			this->array = new T[this->len];
			for (int i = 0; i < this->len; i++)
				this->array[i] = rhs[i];
			return *this;
		};
		T	&operator[](const int idx) const
		{
			if (idx >= this->len || idx < 0)
				throw std::overflow_error("Wrong Index");
			return this->array[idx];
		};
		int	size() const
		{
			return this->len;
		};

	private:
		T	*array;
		int	len;
};

template<typename T>
std::ostream	&operator<<( std::ostream & o, const Array<T> & i );

#endif /* *********************************************************** ARRAY_H */