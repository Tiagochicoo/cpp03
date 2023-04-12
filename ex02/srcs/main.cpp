/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:23:17 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/12 18:43:48 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main(void)
{
	ClapTrap bob("Bob");
	ScavTrap joe("Joe");
	FragTrap mia("Mia");

	bob.attack("Joe");
	joe.takeDamage(1);

	joe.attack("Bob");
	joe.takeDamage(0);
	joe.guardGate();

	mia.attack("Bob");
	mia.takeDamage(5);

	bob.beRepaired(10);
	joe.beRepaired(42);
	mia.beRepaired(123);

	return (0);
}
