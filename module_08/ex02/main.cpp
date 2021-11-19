/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:00:36 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/19 13:16:21 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <stack>
#include "MutantStack.hpp"

int	main( void )
{
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "------------"<< std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "\n**************\n"<< std::endl;
	{
		std::list<int> mstack;
		std::list<int>::iterator it;
		std::list<int>::iterator ite;

		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "Top: " << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << "Size: " << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		it = mstack.begin();
		ite = mstack.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout << "\n**************\n"<< std::endl;
	{
		MutantStack<std::string> mstack;
		MutantStack<std::string>::iterator it;
		MutantStack<std::string>::iterator ite;

		mstack.push("A");
		mstack.push("B");
		std::cout << "Top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size: " << mstack.size() << std::endl;
		mstack.push("C");
		mstack.push("D");
		mstack.push("E");
		it = mstack.begin();
		ite = mstack.end();
		std::cout << "------------"<< std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
}
