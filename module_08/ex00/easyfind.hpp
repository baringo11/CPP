/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:00:58 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/16 12:11:29 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template< typename T >
typename T::iterator	easyfind(T container, int x)
{
	typename T::iterator it;
	//typename T::iterator it2 = container.end();

    it = find(container.begin(), container.end(), x);

	std::cout << "address: " << &it << " and value: " << *it << std::endl;
	//std::cout << "address: " << &it2 << " and value: " << *it2 << std::endl;

	if (it == container.end())
		throw std::bad_exception();
	return (it);
}

#endif
