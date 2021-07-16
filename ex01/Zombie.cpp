/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 11:45:05 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/16 12:01:12 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Zombie::Zombie(void) {}

Zombie::~Zombie(void)
{
	this->_zombieLog("i'm destroyed");
}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

void	Zombie::assignName(const std::string name)
{
	this->_name = name;
}

void	Zombie::_zombieLog(const std::string msg) const
{
	std::cout << "<" << this->_name << "> " << msg << std::endl;
}

void	Zombie::annouce(void) const
{
	this->_zombieLog("BraiiiiiiinnnzzzZ...");
}
