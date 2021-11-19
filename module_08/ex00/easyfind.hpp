/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:00:58 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/19 12:29:30 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template< typename T >
typename T::iterator	easyfind(T container, int x)
{
	typename T::iterator it;

    it = find(container.begin(), container.end(), x);
	if (it == container.end())
		throw ("Value not found");
	return (it);
}

#endif
