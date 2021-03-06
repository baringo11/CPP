/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:44:55 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/14 11:59:08 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.h"

int	main()
{
	std::string	command;
	Phonebook	phonebook;

	while (1)
	{
		if (std::cin.eof())
			exit_program();
		std::cout << "***** CHOOSE COMMAND *****" << std::endl;
		std::cout << "   (ADD, SEARCH, EXIT)    " << std::endl;
		std::cin >> command;
		if (!command.compare("ADD"))
			add_contact(&phonebook);
		else if (!command.compare("SEARCH"))
			search_contact(phonebook);
		else if (!command.compare("EXIT"))
			exit_program();
		else
			std::cout << "Wrong command, try again" << std::endl;
	}
}

void	add_contact(Phonebook *phonebook)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cin.ignore();

	std::cout << "\n- Write the FIRST NAME: ";
	std::getline(std::cin, first_name);
	while (!std::cin.eof() && first_name.empty())
	{
		std::cout << "Error, FIRST NAME shouldn't be empty\n";
		std::cout << "\n- Write the FIRST NAME: ";
		std::getline(std::cin, first_name);
	}
	if (!std::cin.eof())
		std::cout << "- Write the LAST NAME: ";
	std::getline(std::cin, last_name);

	if (!std::cin.eof())
		std::cout << "- Write the NICKNAME: ";
	std::getline(std::cin, nickname);

	if (!std::cin.eof())
		std::cout << "- Write the PHONE NUMBER: ";
	std::getline(std::cin, phone_number);

	if (!std::cin.eof())
		std::cout << "- Write the DARKEST SECRET: ";
	std::getline(std::cin, darkest_secret);

	if (phonebook->get_index() == 8)
		phonebook->set_index();
	phonebook->contacts[phonebook->get_index()].addInfo(first_name, last_name, nickname, phone_number, darkest_secret);
	phonebook->increment_index();
	std::cout << std::endl;
}

void	search_contact(Phonebook phonebook)
{
	int	index;
	int	search;
	std::string	n;

	index = 0;
	search = 0;
	std::cin.ignore();
	while (index < 8)
	{
		if (!phonebook.contacts[index].getName().empty())
		{
			search++;
			std::cout << std::setw(10) << std::right << index + 1 << " | " \
			<< std::setw(10) << std::right << phonebook.contacts[index].getShortName() << " | " \
			<< std::setw(10) << std::right << phonebook.contacts[index].getShortLastName() << " | " \
			<< std::setw(10) << std::right << phonebook.contacts[index].getShortNickname() << std::endl;
		}
		index++;
	}
	if (!search)
	{
		std::cout << "\n***** NO CONTACTS *****\n" << std::endl;
		return ;
	}
	std::cout << "\nWrite the number of the contact you want to consult: ";
	std::getline(std::cin, n);
	if (std::cin.eof())
		exit_program();
	std::cout << std::endl;
	if ((!n.compare("1") || !n.compare("2") || !n.compare("3") || !n.compare("4") || !n.compare("5") || !n.compare("6") || !n.compare("7") || !n.compare("8"))
		&& stoi(n) <= search)
	{
		std::cout << "\t- First name: \t\t" << phonebook.contacts[stoi(n) - 1].getName() << std::endl;
		std::cout << "\t- Last name: \t\t" << phonebook.contacts[stoi(n) - 1].getLastName() << std::endl;
		std::cout << "\t- Nickname: \t\t" << phonebook.contacts[stoi(n) - 1].getNickname() << std::endl;
		std::cout << "\t- Phone number: \t" << phonebook.contacts[stoi(n) - 1].getPhoneNumber() << std::endl;
		std::cout << "\t- Darkest secret: \t" << phonebook.contacts[stoi(n) - 1].getDarkestSecret() << std::endl << std::endl;
	}
	else
		std::cout << "***** WRONG INDEX *****\n" << std::endl;
}

void	exit_program()
{
	std::cout << "\n***** EXIT *****" << std::endl;
	exit(0);
}
