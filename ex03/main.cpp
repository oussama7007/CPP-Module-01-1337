/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:52:19 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/08 20:07:27 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.h"
#include "HumanB.h"
#include "Weapon.h"

int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);    
    bob.attack();
    club.setType("some other type of club");
    bob.attack();



    // Weapon club = Weapon("crude spiked club");
    // HumanB jim("Jim");
    // jim.attack();
    
    // jim.setWeapon(club);
    // jim.attack();
    // club.setType("some other type of club");
    // jim.attack();
    return (0);
}
