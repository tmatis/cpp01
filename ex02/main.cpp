/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 11:52:15 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/16 12:08:43 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string myString = "HI THIS IS BRAIN";
	std::string *stringPTR = &myString;
	std::string &stringREF = myString;
	
	std::cout << "string address: " << &myString << std::endl;
	std::cout << "string address form stringPTR: " << stringPTR << std::endl;
	std::cout << "string address form stringREF: " << &stringREF << std::endl;
	std::cout << "string from stringPTR: " << *stringPTR << std::endl;
	std::cout << "string from stringREF: " << stringREF << std::endl;
}
