/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:37:12 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/08 11:22:26 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
   
  
class Zombie
{
    private:
        std::string name;
    public:
        void    announce( void );
        Zombie(std::string &ZombieName);
        ~Zombie(void); 
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
 