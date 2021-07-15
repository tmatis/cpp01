/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 21:05:44 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/15 21:25:37 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z1 = Zombie::newZombie("Bob");
	Zombie	*z2 = Zombie::newZombie("Alice");

	Zombie::randomChump("Martin");
	Zombie::randomChump("Theo");

	delete z1;
	delete z2;
}
