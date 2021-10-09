/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:39:25 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/09 21:31:42 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Zombie.hpp"

Zombie*	ZombieHorde(int n, std::string name)
{
	Zombie	*zombieHorde;
	int		i;
	int		j;

	if (n <= 0)
		return (NULL);
	zombieHorde = new Zombie[n];
	if (!zombieHorde)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		name.append(std::to_string(i + 1));
		zombieHorde[i].setName(name);
		name.pop_back();
		j = i + 1;
		while (j /= 10)
			name.pop_back();
		i++;
		n--;
	}	
	return (zombieHorde);
}
