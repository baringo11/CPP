/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:00:36 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/16 12:12:07 by jbaringo         ###   ########.fr       */
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
	int myints2[] = {16,2,77,29};
	std::vector<int>	v1 (myints, myints + sizeof(myints) / sizeof(int) );
	std::list<int>		l1 (myints2, myints2 + sizeof(myints2) / sizeof(int) );
	std::vector<int>::iterator	it;
	std::list<int>::iterator	it2;

	try
	{
		it = easyfind(v1, 77);
		std::cout << "Vector iterator: address: " << &it << " and value: " << *it << std::endl;
		
		it2 = easyfind(l1, 29);
		std::cout << "\n-----------------\n" << std::endl;
		std::cout << "Vector iterator: address: " << &it << " and value: " << *it << std::endl;
		std::cout << "List iterator  : address: " << &it2 << " and value: " << *it2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
