/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:16:33 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/03 18:57:20 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string name_form, const int grade_sign, const int grade_execute);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		std::string const	getName() const;
		bool				getIfSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		void				setIfSigned();

		void	beSigned(Bureaucrat & bur);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

	private:
		const std::string	name;
		bool				if_signed;
		const int			grade_to_sign;
		const int			grade_to_execute;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */