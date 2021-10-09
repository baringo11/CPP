/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:34:28 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/09 20:43:02 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Zombie.hpp"

int	main()
{
	Zombie	*zombie1;
	Zombie	*zombie2;

	zombie1 = newZombie("Juan Carlos");
	zombie1->announce();
	zombie2 = newZombie("Antonio");
	zombie2->announce();

	randomChump("Jose Luis");
	randomChump("Alfredo");

	delete zombie1;
	delete zombie2;
}
