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

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap 	bob("Bob");
	ScavTrap 	joe("Joe");
	FragTrap 	mia("Mia");
	DiamondTrap	Lee("Lee");

	bob.attack("Joe");
	joe.takeDamage(1);

	joe.attack("Bob");
	bob.takeDamage(0);
	joe.guardGate();

	mia.attack("Bob");
	mia.takeDamage(5);
	mia.highFivesGuys();

	Lee.attack("Joe");
	Lee.takeDamage(30);
	Lee.beRepaired(999);
	Lee.guardGate();
	Lee.highFivesGuys();
	Lee.whoAmI();

	bob.beRepaired(10);
	joe.beRepaired(42);
	mia.beRepaired(123);

	return (0);
}
