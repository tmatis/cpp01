/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 11:47:11 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/16 11:57:14 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie *z_array = new Zombie[N];

	for (int i = 0; i < N; i++) // naming all zombies
		z_array[i].assignName(name);
	return (z_array);
}
