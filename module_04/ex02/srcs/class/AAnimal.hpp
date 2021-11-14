/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:09:54 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/19 11:21:41 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	public:
		virtual ~AAnimal();
		virtual void	makeSound() = 0;
		std::string		getType() const;

		AAnimal &		operator = ( AAnimal const & rhs );

	protected:
		std::string type;

};
std::ostream &			operator<<( std::ostream & o, AAnimal const & i );

#endif /* ********************************************************** AANIMAL_H */