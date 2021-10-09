/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:33:16 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/10 01:08:21 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

# include <string>
# include <iostream>

class	Weapon
{
	public:
		Weapon(std::string weapon_type);
		~Weapon();
		const std::string &getType(void) const;

		void	setType(std::string type);
	private:
		std::string	type;
};

#endif
