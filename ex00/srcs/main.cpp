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

int main(void)
{
	ClapTrap bob("Bob");
	ClapTrap joe;

	bob.attack("Joe");
	bob.takeDamage(20);
	bob.beRepaired(42);

	joe.attack("Me");
	return (0);
}
