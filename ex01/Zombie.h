/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:46:05 by oait-si-          #+#    #+#             */
/*   Updated: 2025/10/15 17:21:08 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>


class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string &ZombieName);
        void announce(); 
        
};

Zombie *zombieHorde( int N, std::string name );
#endif