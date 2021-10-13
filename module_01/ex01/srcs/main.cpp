/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:34:28 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/11 12:14:31 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Zombie.hpp"

int	main()
{
	Zombie	*Horde;
	int		n;
	int		i;

	n = 13;
	Horde = ZombieHorde(n, "loco");
	i = -1;
	while (++i < n)
		Horde[i].announce();

	delete [] Horde;
}
