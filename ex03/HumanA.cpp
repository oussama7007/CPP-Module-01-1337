/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:16:53 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/05 10:26:03 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name) , weapon(weapon) {}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << "\n";
} 