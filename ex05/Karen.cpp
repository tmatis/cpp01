/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:10:15 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/20 15:38:51 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Karen::Karen(void) {}

Karen::~Karen() {}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

void	Karen::complain(std::string level) const
{
	const std::string	level_index[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void 				(Karen::*funcs[])(void) const
			= {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	
	for (size_t i = 0; i < 4; i++)
	{
		if (level_index[i] == level)
		{
			(this->*funcs[i])();
			return ;
		}
	}
	std::cout << "Unknow log level" << std::endl;
}

void	Karen::_debug(void) const
{
	std::cout
		<< "[DEBUG] "
		<< "I love to get extra bacon for my \7XL-double-cheese burger. I just love it!"
		<< std::endl;
}

void	Karen::_info(void) const
{
	std::cout
		<< "[INFO] "
		<< "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::_warning(void) const
{
	std::cout
		<< "[WARNING] "
		<< "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
		<< std::endl;
}

void	Karen::_error(void) const
{
	std::cout
		<< "[ERROR] "
		<< "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}
