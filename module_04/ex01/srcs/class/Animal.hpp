/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:09:54 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/18 18:46:02 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );

		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string type;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */