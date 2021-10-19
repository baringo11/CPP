/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:04:17 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/19 11:24:58 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main()
{
	Animal *a = new Dog();
	Animal *b = new Cat();

	// Compilation Error
	//Animal *b = new Animal();

	Dog dog;

	a->makeSound();
	std::cout << a << std::endl;

	b->makeSound();
	std::cout << b << std::endl;

	dog.makeSound();
	std::cout << dog << std::endl;

	delete a;
	delete b;
}
