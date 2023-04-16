/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:59:54 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/16 17:40:55 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	_name = "NoNameBoy";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "\e[0;35mScavTrap\e[0m Default constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "\e[0;35mScavTrap\e[0m constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
	(void)src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;35mScavTrap\e[0m destructor called for " << this->_name << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & value )
{
	(void)value;
	//if ( this != &value )
	//{
		//this->_value = value.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	(void)i;
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints && this->_hitPoints && this->_attackDamage)
	{
		this->_energyPoints--;
		std::cout << "\e[0;35mScavTrap \e[0m" << this->_name << "\e[0;33m attacks \e[0m" << target << ", causing \e[0;33m" << this->_attackDamage << "\e[0m points of damage!\n";
	}
	else if (!this->_attackDamage)
		std::cout << "\e[0;35mScavTrap \e[0m" << this->_name << "\e[0;31m doesn't have\e[0m enough \e[0;31mattack damage\e[0m to hurt anyone!\n";
	else
		std::cout << "\e[0;35mScavTrap \e[0m" << this->_name << "\e[0;35m has no hit points or energy points left!\e[0m\n";
}

void	ScavTrap::guardGate(void)
{
	std::cout << "\e[0;35mScavTrap \e[0m" << this->_name << " is now in \e[0;35mGate keeper mode\e[0m...\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */