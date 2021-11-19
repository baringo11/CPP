/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:00:36 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/19 12:28:50 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include "easyfind.hpp"

int	main( void )
{
	int myints[] = {16,2,77,29};
	std::vector<int>	v;
	std::list<int>		l;
	std::vector<int>::iterator	it;
	std::list<int>::iterator	it2;
	
	for (int i = 0; i < 4; i++)
	{
		v.push_back(myints[i]);
		l.push_back(myints[i]);
	}
	try
	{
		it = easyfind(v, 2);
		std::cout << "Vector iterator: Found value: address: " << &it << " and value: " << *it << std::endl;

		it2 = easyfind(l, 29);
		std::cout << "List iterator:   Found value: address: " << &it2 << " and value: " << *it2 << std::endl;

		std::cout << "\n-----------------\n" << std::endl;

		it = easyfind(v, 7734);
	}
	catch(const char* e)
	{
		std::cerr << e << '\n';
	}
}
