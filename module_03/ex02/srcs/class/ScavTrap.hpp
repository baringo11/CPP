/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:39:02 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/15 22:21:51 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap :  public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name_scavtrap);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );

		void	attack(std::string const & target) const;
		void	guardGate(void) const;

	private:

};

#endif /* ******************************************************** SCAVTRAP_H */