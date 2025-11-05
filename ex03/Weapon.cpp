/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:00:44 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/05 11:13:55 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string Newtype) : type(Newtype){}


const std::string& Weapon::getType(void) const
{
    return type;
}
void Weapon::setType(std::string newType) : type(newType) {}