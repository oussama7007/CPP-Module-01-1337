/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:54:40 by oait-si-          #+#    #+#             */
/*   Updated: 2025/10/13 16:09:11 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"




// 🧩 Exercise 1 — The Knight
// class Knight
// {
//     private:
//         std::string name;
//         std::string weapon;
//     public:
//         Knight(std::string &Knightname, std::string &knightweapon) : name(Knightname) , weapon(knightweapon)
//         {
//             std::cout << "knight" << name << "is born!" ;
//         }
        
//         ~Knight()
//         {
//             std::cout << name << " retires from service.";
//         }           
//         void    introduce()
//         {
//             std::cout << "I am " << name << " , and I wield the " << weapon << "!" ;
            
//         }
// };

// Knight* newKnight(std::string name, std::string weapon)
// {
//     return new Knight(name , weapon);
// }

// void    randomKnight(std::string name, std::string weapon)
// {
//    Knight Knight(name , weapon);
//    Knight.introduce();
// }

// void    f()
// {
//     system("leaks a.out");
// }
// int main()
// {
//         atexit(f);
//         std::cout << "\n=== creating knights on heap\n";
//         Knight* arthur = newKnight( "Arthur", "Excalibur");
//         arthur->introduce();    
//         std::cout << "\n====== creating stack knight === \n" << std::endl;
//         randomKnight("Oussama", "Agadir");
//         std::cout << "\n == program endig====\n";
//         delete arthur;
//         return 0;
// }


//🧩 Exercise 2 — The Cat and the Box

class Cat 