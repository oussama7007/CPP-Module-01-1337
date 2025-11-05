/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:14:26 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/05 11:02:16 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name) : name(name) , weapon(NULL) {}
void    HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon << "\n";
} 

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}