/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:59:42 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/08 16:30:27 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Zombie.h"

int main(void)
{

        Zombie* heapZombie = newZombie("Foo");
        heapZombie->announce();
        randomChump("oussama");
        delete heapZombie;

        return 0;
}