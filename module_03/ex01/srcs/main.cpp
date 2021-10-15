/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:28:13 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/15 22:12:42 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main(void)
{
	ScavTrap maquina("alexa");

	maquina.attack("siri");
	maquina.takeDamage(55);
	maquina.beRepaired(42);
	maquina.guardGate();
}