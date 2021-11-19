/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:16:40 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/19 12:42:35 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <string>
# include <algorithm>

class Span
{
	public:
		Span();
		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void	addNumber(int n);
		void	addRandomNumbers(int n);

		int				shortestSpan(void) const;
		int				longestSpan(void) const;
		unsigned int	getLen() const;

	private:
		unsigned int	len;
		std::vector<int>	numbers;
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */