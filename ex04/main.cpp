/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 19:41:50 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/20 12:55:08 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	str_replace(
			std::string str,
			const std::string &find,
			const std::string &replace)
{
	const size_t	find_size = find.size();
	size_t			str_pos = 0;

	while ((str_pos = str.find(find)) != std::string::npos)
	{
		str.erase(str_pos, find_size);
		str.insert(str_pos, replace);
	}
	return (str);
}

std::string	upper_string(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		str.at(i) = std::toupper(str.at(i));
	return (str);
}

int	replace(std::string filename, std::string find, std::string replace)
{
		std::ifstream	file_in(filename.c_str());
		std::ofstream	file_out;
		std::string		line("");

		if (!file_in.is_open())
		{
			std::cerr << "Error: cannot open file: " << filename << std::endl;
			return (1);
		}
		file_out.open((upper_string(filename) + ".replace").c_str());
		if (!file_out.is_open())
		{
			std::cerr << "Error: cannot open file: "
			<< upper_string(filename) + ".replace" << std::endl;
			return (1);
		}
		// we the string to replace is the same that we replace we do nothing
		if (find != replace)
		{
			while (std::getline(file_in, line))
				file_out << str_replace(line, find, replace) << std::endl; 
		}
		file_out.close();
		file_in.close();
		return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
		return (replace(argv[1], argv[2], argv[3]));
	else
	{
		std::cerr << "Error: not the good number of argument" << std::endl;
		return (1);
	}

}
