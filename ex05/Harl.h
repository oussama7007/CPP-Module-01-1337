/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:46:39 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/07 11:32:27 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl
{
      private:
            void debug( void );
            void info( void );
            void warning( void );
            void error( void );
      public:
            void complain( std::string level );
};
#endif 