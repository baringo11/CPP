/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:33:16 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/09 20:40:35 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>
# include <string>

class	Zombie
{
	public:
		Zombie(std::string zname);
		~Zombie();
		void	announce(void);
	private:
		std::string	name;
	
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
