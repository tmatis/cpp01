/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:42:39 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/20 15:54:01 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
	Karen		karen;
	std::string	level;
	std::string	level_index[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	if (argc != 2)
	{
		std::cerr << "Error: you need one parameter" << std::endl;
		return (1);
	}
	level = argv[1];
	//we get the level index in i
	for (i = 0; i < 4; i++)
		if (level_index[i] == level)
			break ;
	switch (i)
	{
		case 0:
			karen.complain("DEBUG");
		case 1:
			karen.complain("INFO");
		case 2:
			karen.complain("WARNING");
		case 3:
			karen.complain("ERROR");
			break ;
		default:
			std::cout
				<< "[Probably complaining about insignificant problems]"
				<< std::endl;
	}
}
