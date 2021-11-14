/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:11:17 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/09 19:55:03 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef struct	s_Data
{
	int a;
}				Data;

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

int main()
{
    Data data;
    data.a = 42;
    
	std::cout << "address: " << &data << " && value: " << data.a << std::endl;
    uintptr_t u = serialize(&data);
    
    Data *data2 = deserialize(u);
	std::cout << "address: " << data2 << " && value: " << data2->a << std::endl;
}