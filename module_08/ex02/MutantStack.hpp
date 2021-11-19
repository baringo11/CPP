/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:41:23 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/19 10:46:35 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>

template< typename T >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack( MutantStack const & src ) : std::stack<T>(src) {}
		virtual ~MutantStack() {}

		MutantStack &	operator = ( MutantStack const & rhs )
		{
			if ( this != &rhs )
			{
				MutantStack temp(rhs);
				temp.swap(*this);
			}
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator		begin( void )
		{
			return this->std::stack<T>::c.begin();
		}

		iterator		end( void )
		{
			return this->std::stack<T>::c.end();
		}

	private:
};

template< typename T >
std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i );

#endif /* ***************************************************** MUTANTSTACK_H */