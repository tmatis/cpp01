/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:51:57 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/16 12:02:17 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE

# define ZOMBIE

#include <string>

class Zombie
{
	private:
		const std::string	_name;
		void				_zombieLog(const std::string msg) const;
	public:
		static Zombie	*newZombie(const std::string name);
		static void		randomChump(const std::string name);
		void			annouce(void) const;
						Zombie(const std::string name);
						~Zombie(void);
	};

#endif // [ZOMBIE]
