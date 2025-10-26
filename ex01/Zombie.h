/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:46:05 by oait-si-          #+#    #+#             */
/*   Updated: 2025/10/26 10:28:55 by oait-si-         ###   ########.fr       */
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
        Zombie();
        Zombie(std::string &My_Name);
        ~Zombie();
        void announce(); 
        void setName(std::string newName);
};

Zombie *zombieHorde( int N, std::string name );
#endif