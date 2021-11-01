/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:28:13 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/01 20:05:46 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main(void)
{
	ClapTrap maquina("alexa");
	maquina.attack("siri");
	maquina.takeDamage(8);
	maquina.beRepaired(5);

	std::cout << "\n---------------\n\n";

	ScavTrap mastodonte("siri");
	mastodonte.attack("alexa");
	mastodonte.takeDamage(55);
	mastodonte.beRepaired(42);
	mastodonte.guardGate();

	std::cout << "\n---------------\n\n";
}