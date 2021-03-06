/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:58:01 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/15 13:52:33 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate()
{
    srand(time(NULL));

	int const i = rand() % 3;
	if (i == 0)
	{
		std::cout << "Generate type: A" << std::endl;
		return (new A);
	}
	else if (i == 1)
	{
		std::cout << "Generate type: B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Generate type: C" << std::endl;
		return (new C);
	}
}

void	identify(Base *p)
{
    if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A &tmp = dynamic_cast<A &>(p);
		(void)tmp;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{}
	try
	{
		B &tmp = dynamic_cast<B &>(p);
		(void)tmp;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{}
	try
	{
		C &tmp = dynamic_cast<C &>(p);
		(void)tmp;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{}
}

int	main()
{
	Base * base = static_cast<Base *>(generate());
    identify(base);
    identify(*base);

	delete base;
}
