/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:45:50 by oait-si-          #+#    #+#             */
/*   Updated: 2025/10/26 11:40:42 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"


Zombie::Zombie(std::string &My_Name) : name(My_Name)
{
    std::cout << "Zombie obj " << name << " created" << std::endl;
}

Zombie::Zombie()
{
    std::cout << "Zombie obj" << name << "created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie obj " << name << " destroyed \n";
}

void Zombie::announce()
{
            std::cout <<  name << ": BraiiiiiiinnnzzzZ...\n";
} 

void Zombie::setName(std::string newName)
{
    name = newName;
}