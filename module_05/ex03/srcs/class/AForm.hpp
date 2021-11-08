/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:16:33 by jbaringo          #+#    #+#             */
/*   Updated: 2021/11/03 18:57:20 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(std::string name_AForm, const int grade_sign, const int grade_execute);
		AForm( AForm const & src );
		virtual ~AForm();

		AForm &		operator=( AForm const & rhs );

		void	beSigned(Bureaucrat & bur);
		void	execute(Bureaucrat const & executor) const;
		virtual void	executeConcreteForm() const = 0;

		std::string const	getName() const;
		bool				getIfSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		void				setIfSigned();

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

		class FileOpeningException
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

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ AForm_H */