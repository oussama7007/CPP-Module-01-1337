/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:45:50 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/04 10:58:30 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H


#include <iostream>

class Weapon 
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        const std::string& getType(void) const;
        void setType(std::string newType);
}


#endif