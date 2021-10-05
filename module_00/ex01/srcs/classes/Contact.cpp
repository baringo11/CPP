/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:53:17 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/05 19:42:07 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/phonebook.h"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::addInfo(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

std::string Contact::getName(void) const
{
	return (this->first_name);
}

std::string Contact::getShortName() const
{
	std::string	str;

	if (this->first_name.length() <= 10)
		return (this->first_name);
	str = this->first_name.substr(0, 9);
	str.append(".");
	return (str);
}

std::string Contact::getLastName(void) const
{
	return (this->last_name);
}

std::string Contact::getShortLastName() const
{
	std::string	str;

	if (this->last_name.length() <= 10)
		return (this->last_name);
	str = this->last_name.substr(0, 9);
	str.append(".");
	return (str);
}

std::string Contact::getNickname(void) const
{
	return (this->nickname);
}

std::string Contact::getShortNickname() const
{
	std::string	str;

	if (this->nickname.length() <= 10)
		return (this->nickname);
	str = this->nickname.substr(0, 9);
	str.append(".");
	return (str);
}

std::string Contact::getDarkestSecret() const
{
	return (this->darkest_secret);
}

std::string Contact::getPhoneNumber() const
{
	return (this->phone_number);
}
