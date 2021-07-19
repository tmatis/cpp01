#include "Weapon.hpp"

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Weapon::Weapon(const std::string type) : _type(type) {}
Weapon::~Weapon(void) {}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

const std::string	&Weapon::getType(void) const
{
	return (this->_type);
}

void				Weapon::setType(const std::string &type)
{
	this->_type = type;
}
