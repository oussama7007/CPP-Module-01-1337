/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:17:02 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/07 12:40:25 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal{
    public:
        void greet() { std::cout << "HELLO , HUMAN\n";}
};
int main()
{
    Robot r;
    void    (Robot::*ptr)() = &Robot::greet;

    (r.*ptr)();

    Robot *f;
    f = &r;
    
    (f->*ptr)();
}