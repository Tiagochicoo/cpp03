#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		std::string 	_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
		
	public:

		ScavTrap();
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );


};

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */