/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:27:09 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/16 17:38:40 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() : ClapTrap("NoNameBoy_clap_name"), FragTrap(), ScavTrap()
{
	_name = "NoNameBoy";
	this->ClapTrap::_name = _name + "_clap_name";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
	_hitPoints = this->FragTrap::_hitPoints;
	_energyPoints = this->ScavTrap::_energyPoints;
	_attackDamage = this->FragTrap::_attackDamage;
	std::cout << "\e[0;33mDiamondTrap\e[0m Default constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	_name = name;
	this->ClapTrap::_name = _name + "_clap_name";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
	_hitPoints = this->FragTrap::_hitPoints;
	_energyPoints = this->ScavTrap::_energyPoints;
	_attackDamage = this->FragTrap::_attackDamage;
	std::cout << "\e[0;33mDiamondTrap\e[0m constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & value ) : ClapTrap(value), FragTrap(value), ScavTrap(value)
{
	(void)value;
	std::cout << "\e[0;33mDiamondTrap\e[0m copy constructor called for " << this->_name << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "\e[0;33mDiamondTrap\e[0m destructor called for " << this->_name << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & value )
{
	(void)value;
	//if ( this != &value )
	//{
		//this->_value = value.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i )
{
	(void)i;
	// o << i;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::whoAmI(void)
{
	std::cout << "\e[0;33mDiamondTrap\e[0m Am I " << this->_name << " , or " << ClapTrap::_name << " ?\n";
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */