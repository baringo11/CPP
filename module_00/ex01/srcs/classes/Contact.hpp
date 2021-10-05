/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:56:07 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/05 19:37:29 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "../../includes/phonebook.h"

class Contact
{
	public:
			Contact();
			~Contact();
			void		addInfo(std::string first_name, std::string last_name, std::string nicname, std::string phone_number, std::string darkest_secret);
			std::string	getName(void) const;
			std::string getShortName() const;
			std::string getLastName() const;
			std::string getShortLastName() const;
			std::string getNickname() const;
			std::string getShortNickname() const;
			std::string getDarkestSecret() const;
			std::string getPhoneNumber() const;
	private:
			std::string	first_name;
			std::string	last_name;
			std::string	nickname;
			std::string	phone_number;
			std::string	darkest_secret;
	
};

#endif