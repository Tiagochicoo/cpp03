/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:27:09 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/14 19:27:15 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	_name = "NoNameBoy";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "\e[0;33mDiamondTrap\e[0m Default constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "\e[0;33mDiamondTrap\e[0m constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & value ) : ClapTrap(value), ScavTrap(value), FragTrap(value)
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
	o << i;
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