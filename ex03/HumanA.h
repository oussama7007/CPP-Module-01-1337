/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:44:06 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/02 15:57:14 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"

class   HumanA
{
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanA(std::string name);
        
}

class   HumanB
{
    
}
#endif