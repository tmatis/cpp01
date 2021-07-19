/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 19:41:50 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/19 21:12:06 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error: not the good number of argument" << std::endl;
		return (1);
	}
	else
	{
		std::ofstream	file_out((std::string(argv[1]) + ".replace").c_str());
		std::ifstream	file_in(argv[1]);
		std::string		line("");

		if (!file_out.is_open() || !file_in.is_open())
		{
			std::cerr << "Error: cannot open file: " << argv[1] << std::endl;
			if (file_out.is_open())
				file_out.close();
			if (file_in.is_open())
				file_in.close();
			return (1);
		}		
		while (std::getline(file_in, line))
		{
			std::cout << line << std::endl; 
		}
		file_out.close();
		file_in.close();
	}
}
