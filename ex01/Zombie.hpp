#ifndef ZOMBIE

# define ZOMBIE

# include <string>

class Zombie
{
	private:
		std::string	_name;
		void		_zombieLog(const std::string msg) const;
	public:
		static Zombie* zombieHorde(int N, std::string name);
		void			assignName(const std::string name);
		void			annouce(void) const;
						Zombie(void);
						~Zombie(void);
	};

#endif // [ZOMBIE]
