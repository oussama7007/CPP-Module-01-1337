/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:17:02 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/07 12:53:24 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Light{
    public:
        void on()  { std::cout << "💡 The light is ON\n"; }
        void off() { std::cout << "🌑 The light is OFF\n"; }
        void blink() { std::cout << "✨ The light is BLINKING\n"; }
};
int main()
{
    Light lamp;
    std::string action[3] = {"on", "off", "blink"};
    void   (Light::*funs[3])() = { &Light::on, &Light::off, &Light::blink };
    
    std::string input;
    std::cout << "Enter action (on/off/blink):" ;
    std::cin >> input;

    for(int i = 0 ; i < 3; i++)
    {
        if(input == action[i])
        {
            (lamp.*funs[i])();
            return 0;
        }
    }
    std::cout << "Unknown action!\n";
}