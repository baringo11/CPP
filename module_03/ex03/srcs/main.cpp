/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:28:13 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/17 18:18:44 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main(void)
{
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

	DiamondTrap	definitive("ultimate");
	definitive.attack("all");
	definitive.takeDamage(25);
	definitive.beRepaired(15);
	definitive.guardGate();
	definitive.highFiveGuys();
	definitive.whoAmI();
	
std::cout << "\n*************\n\n";

}