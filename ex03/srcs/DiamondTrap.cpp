/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:27:09 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/16 15:31:38 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() : ClapTrap("NoNameBoy_clap_name")
{
	_name = "NoNameBoy";
	this->ClapTrap::_name = _name + "_clap_name";
	std::cout << this->ClapTrap::_name << std::endl;
	this->ScavTrap::_energyPoints = 999; // can I do this?
	_hitPoints = this->FragTrap::_hitPoints;
	_energyPoints = this->ScavTrap::_energyPoints;
	_attackDamage = this->FragTrap::_attackDamage;
	std::cout << "\e[0;33mDiamondTrap\e[0m Default constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	ClapTrap::_name = name;
	// FragTrap::_attackDamage = 30;
	// ScavTrap::_name = _name;
	// ClapTrap::_name = _name + "_clap_name";
	_attackDamage = FragTrap::_attackDamage;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	std::cout << "\e[0;33mDiamondTrap\e[0m constructor called for " << _name << std::endl;
	std::cout << "_name: " << _name << std::endl;
	std::cout << "_hitPoints (FragTrap): " << _hitPoints << std::endl;
	std::cout << "_energyPoints (ScavTrap): " << _energyPoints << std::endl;
	std::cout << "_attackDamage (FragTrap): " << _attackDamage << std::endl;
	std::cout << "_attackDamage (**FragTrap): " << FragTrap::_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & value ) : ClapTrap(value),  ScavTrap(value), FragTrap(value)
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