#ifndef HUMANA

# define HUMANA

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon		&_weapon;
	public:
				HumanA(std::string name, Weapon &weapon);
				~HumanA();
		void	attack(void);
	};

#endif // [HUMANA]
