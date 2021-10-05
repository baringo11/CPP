/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:49:31 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/05 18:43:04 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "../../includes/phonebook.h"
# include "Contact.hpp"

class	Phonebook
{
	public:
			Phonebook();
			~Phonebook();
			int		get_index(void) const;
			void	increment_index(void);
			void	set_index();
			Contact	contacts[8];
	private:
			int	index;
};

#endif