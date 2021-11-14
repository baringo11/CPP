/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:04:17 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/10 14:08:03 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main()
{
	AAnimal *a = new Dog();
	AAnimal *b = new Cat();

	// Compilation Error
	//AAnimal *c = new AAnimal();

	a->makeSound();
	std::cout << a->getType() << std::endl;

	b->makeSound();
	std::cout << b->getType() << std::endl;

	Dog dog;
	dog.makeSound();
	std::cout << dog << std::endl;

	delete a;
	delete b;
}
