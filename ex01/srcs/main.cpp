/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:23:17 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/16 10:03:37 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap bob("Bob");
	ScavTrap joe("Joe");

	bob.attack("Joe");
	joe.takeDamage(1);

	joe.attack("Bob");
	joe.takeDamage(0);
	joe.guardGate();
	
	bob.beRepaired(10);
	joe.beRepaired(42);

	return (0);
}
