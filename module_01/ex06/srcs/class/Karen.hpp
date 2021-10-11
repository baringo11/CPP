/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:10:20 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/11 13:59:45 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_CLASS_HPP
# define KAREN_CLASS_HPP

#include "../../includes/main.h"

class	Karen
{
	public:
		Karen();
		~Karen();
		void	filter(std::string level);

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif