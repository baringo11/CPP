/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:39:24 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/19 14:22:11 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice( Ice const & src );
		~Ice();

		Ice &		operator=( Ice const & rhs );

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif /* ************************************************************* ICE_H */