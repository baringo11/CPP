/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:41:23 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/18 14:16:48 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template< typename T >
class MutantStack : std::stack<T>
{
	public:

		MutantStack<T>();
		MutantStack<T>(MutantStack const & src);
		~MutantStack<T>();

		MutantStack &		operator=( MutantStack const & rhs );

	private:

};

template< typename T >
std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i );

#endif /* ***************************************************** MUTANTSTACK_H */