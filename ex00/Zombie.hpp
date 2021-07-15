/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:51:57 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/15 21:03:39 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE

# define ZOMBIE

#include <string>

class Zombie
{
	private:
		std::string	_name;
		void		_zombieLog(std::string msg);
	public:
		static Zombie	*newZombie(std::string name);
		static void		randomChump(std::string name);
		void			annouce(void);
						Zombie(std::string name);
						~Zombie(void);
	};

#endif // [ZOMBIE]
