/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:13:45 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/12 22:19:50 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\e[0;32mFragTrap\e[0m constructor called for " << name << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap(src)
{
	(void)src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "\e[0;32mFragTrap\e[0m destructor called for " << this->_name << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & value )
{
	(void)value;
	// if ( this != &value )
	//{
	// this->_value = value.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	(void)i;
	//o << "Value = " << i.getValue();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::attack(const std::string& target)
{
	if (this->_energyPoints && this->_hitPoints && this->_attackDamage)
		std::cout << "\e[0;32mFragTrap \e[0m" << this->_name << "\e[0;33m attacks \e[0m" << target << ", causing \e[0;33m" << this->_attackDamage << "\e[0m points of damage!\n";
	else if (!this->_attackDamage)
		std::cout << "\e[0;32mFragTrap \e[0m" << this->_name << "\e[0;31m doesn't have\e[0m enough \e[0;31mattack damage\e[0m to hurt anyone!\n";
	else
		std::cout << "\e[0;32mFragTrap \e[0m" << this->_name << "\e[0;35m has no hit points or energy points left!\e[0m\n";
}

void	FragTrap::highFivesGuys()
{
	std::cout << "\e[0;32mFragTrap \e[0m" << this->_name << " is asking for a \e[0;34mhigh five\e[0m!\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */