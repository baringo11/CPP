/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <jbaringo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:34:28 by jbaringo          #+#    #+#             */
/*   Updated: 2021/10/14 14:06:19 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "String address with '&':\t\t" << &str << std::endl;
	std::cout << "String address with a pointer:\t\t" << stringPTR << std::endl;
	std::cout << "String address with a reference:\t" << &stringREF << std::endl;
	std::cout << "String content with a pointer:\t\t" << *stringPTR << std::endl;
	std::cout << "String content with a reference:\t" << stringREF << std::endl;
}
