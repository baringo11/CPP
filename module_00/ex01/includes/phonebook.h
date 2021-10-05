/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:44:44 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/05 19:09:46 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>

# include "../srcs/classes/Phonebook_Class.hpp"
# include "../srcs/classes/Contact.hpp"

void	add_contact(Phonebook *phonebook);
void	search_contact(Phonebook phonebook);
void	exit_program();

#endif