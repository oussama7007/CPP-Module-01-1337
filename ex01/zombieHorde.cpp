/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:12:29 by oait-si-          #+#    #+#             */
/*   Updated: 2025/10/16 10:52:21 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"

Zombie *zombieHorde( int N, std::string name )
{
    if (N < 1)
	{
		std::cout << "Invalid Number of Zombies.\n" << std::endl;
		return (NULL);
	}
    Zombie *My_Zombie = new Zombie[N];
    for(int i = 0; i < N ; ++i)
    {
        My_Zombie[i] = Zombie(name);
    }
    return My_Zombie;
}
