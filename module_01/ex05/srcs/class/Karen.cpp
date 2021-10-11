/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:09:49 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/11 13:47:13 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	return ;
}

Karen::~Karen()
{
	return ;
}

void Karen::complain(std::string level)
{
	int	i;
	std::string	functions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*ptr[4])(void);

	ptr[0] = &Karen::debug;
	ptr[1] = &Karen::info;
	ptr[2] = &Karen::warning;
	ptr[3] = &Karen::error;

	i = 0;
	while (i < 4 && level.compare(functions[i]))
		i++;
	if (i < 4)
		(this->*ptr[i])();
}

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
