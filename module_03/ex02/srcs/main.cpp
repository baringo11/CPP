/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:28:13 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/17 17:49:32 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main(void)
{
	ClapTrap maquina("alexa");
	maquina.attack("siri");
	maquina.takeDamage(7);
	maquina.beRepaired(5);
	
std::cout << "\n*************\n\n";

	ScavTrap mastodonte("siri");
	mastodonte.attack("cortana");
	mastodonte.takeDamage(55);
	mastodonte.beRepaired(42);
	mastodonte.guardGate();
	
std::cout << "\n*************\n\n";

	FragTrap titan("cortana");
	titan.attack("alexa");
	titan.takeDamage(30);
	titan.beRepaired(20);
	titan.highFiveGuys();
	
std::cout << "\n*************\n\n";

}