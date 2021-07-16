/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 11:52:15 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/16 11:54:25 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_horde = Zombie::zombieHorde(10, "jack");

	for (int i = 0; i < 10; i++)
		zombie_horde[i].annouce();
	delete[] zombie_horde;
}
