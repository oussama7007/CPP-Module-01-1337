/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:45:50 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/02 15:59:11 by oait-si-         ###   ########.fr       */
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
        std::string getType(std::string &type ) const;
        std::string setType(std::string newType) : type(newType){}
}



#endif