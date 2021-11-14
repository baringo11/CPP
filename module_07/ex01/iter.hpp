/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:00:58 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/14 19:13:08 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template< typename T >
void	iter(T *array, int len, void (*ft)(const T &))
{
	for (int i = 0; i < len; i++)
		ft(array[i]);
}

#endif
