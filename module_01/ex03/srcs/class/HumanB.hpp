/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:10:51 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/10 01:11:07 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CLASS_HPP
# define HUMAN_B_CLASS_HPP

# include "Weapon.hpp"


class	HumanB
{
	public:
		HumanB(std::string named);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &weapon);
	private:
		std::string	name;
		Weapon	*_weapon;
};

#endif