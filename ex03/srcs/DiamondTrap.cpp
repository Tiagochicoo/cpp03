/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:27:09 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/16 13:56:26 by tpereira         ###   ########.fr       */
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
	std::cout << this->ClapTrap::_name << std::endl;
	this->ScavTrap::_energyPoints = 999; // can I do this?
	_hitPoints = this->FragTrap::_hitPoints;
	_energyPoints = this->ScavTrap::_energyPoints;
	_attackDamage = this->FragTrap::_attackDamage;
	std::cout << "FRAG - hitpoints: " << this->FragTrap::_hitPoints << std::endl;
	std::cout << "SCAV - energyPoints: " << this->ScavTrap::_energyPoints << std::endl;
	std::cout << "FRAG - attackDamage: " << this->FragTrap::_attackDamage << std::endl;
	std::cout << "\e[0;33mDiamondTrap\e[0m Default constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	_name = name;
	this->ScavTrap::_name = _name;
	this->ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
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