/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:00:36 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/14 19:40:58 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "iter.hpp"

template<typename T>
void	print( T &p )
{
	std::cout << "The thing to print is: " << p << std::endl;
}

int	main( void )
{
	std::string	str_array[3] = {"Hey", "Whats", "Up"};
	int			int_array[5] = {0, 1, 2, 3, 4};

	::iter(str_array, 3, &print);

	::iter(int_array, 5, &print);
}

/*
class Awesome 
{
	public: 
		Awesome( void ) : _n( 42 ) { return; } 
		int get( void ) const { return this->_n; } 
	private: 
		int _n; 
}; 
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T > 
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() 
{ 
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5]; 
	iter( tab, 5, print ); 
	iter( tab2, 5, print ); 
	return 0;
}
*/