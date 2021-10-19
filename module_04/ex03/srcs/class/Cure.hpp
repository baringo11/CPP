/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:44:08 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/19 14:22:19 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure( Cure const & src );
		~Cure();

		Cure &		operator=( Cure const & rhs );

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif /* ************************************************************ CURE_H */