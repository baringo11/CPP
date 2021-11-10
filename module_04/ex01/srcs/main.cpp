/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:04:17 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/10 13:52:14 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main()
{
/*	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j; //should not create a leak
		delete i;
	}
*/	{
		Animal* a[4];
		int i;

		std::cout << "\n ***** DOG CONSTRUCTORS ***** \n\n";
		i = -1;
		while (++i < 2)
			a[i] = new Dog();

		std::cout << "\n ***** CAT CONSTRUCTORS ***** \n\n";
		while (i < 4)
			a[i++] = new Cat();

		std::cout << "\n ***** DEEP COPY ***** \n\n";
		Animal deepCopy;
		deepCopy = *a[2];
		std::cout << "getType() = " << deepCopy.getType() << std::endl;
		std::cout << "makeSound() = "; deepCopy.makeSound();

		std::cout << "\n ***** DESTRUCTORS ***** \n\n";
		i = -1;
		while (++i < 4)
			delete a[i];
	}
}
