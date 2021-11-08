/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:41:55 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/08 18:02:13 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "forms/RobotomyRequestForm.hpp"
# include "forms/ShrubberyCreationForm.hpp"
# include "forms/PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &	operator = ( Intern const & rhs );

		AForm		*makeForm(std::string formName, std::string formTarget);

		class UnknownFormException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

	private:
};

#endif /* ********************************************************** INTERN_H */
