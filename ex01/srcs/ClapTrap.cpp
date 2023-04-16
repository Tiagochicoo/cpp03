/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:22:22 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/16 09:44:49 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	this->_name = "NoNameBoy";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	std::cout << "ClapTrap constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	std::cout << "ClapTrap constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	(void)src;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & value )
{
	(void)value;
	// if ( this != &rhs )
	//{
	// this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints && this->_hitPoints && this->_attackDamage)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << "\e[0;33m attacks \e[0m" << target << ", causing \e[0;33m" << this->_attackDamage << "\e[0m points of damage!\n";
	}
	else if (!this->_attackDamage)
		std::cout << "ClapTrap " << this->_name << "\e[0;31m doesn't have\e[0m enough \e[0;31mattack damage\e[0m to hurt anyone!\n";
	else
		std::cout << "ClapTrap " << this->_name << "\e[0;35m has no hit points or energy points left!\e[0m\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hitPoints)
		std::cout << "ClapTrap " << this->_name << " is dead and can't take any more damage!" << std::endl;
	else if (this->_hitPoints >= amount)
		std::cout << "ClapTrap " << this->_name << " has taken \e[0;31m" << amount << "\e[0m points of \e[0;31mdamage\e[0m!\n";
	else
	{
		this->_hitPoints = 0;
		std::cout << "Clap Trap " << this->_name << " has no more hitPoints left and has died!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints && this->_hitPoints)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " has been repaired for \e[0;32m" << amount << "\e[0m points of \e[0;32mdamage\e[0m!\n";
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no energy or hit points left" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */