/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:34:28 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/11 14:00:27 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Error, wrong number of parameters" << std::endl;
		return (-1);
	}
	karen.filter(argv[1]);
	return (0);
}
