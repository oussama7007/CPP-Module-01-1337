/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:38:31 by oait-si-          #+#    #+#             */
/*   Updated: 2025/10/15 16:28:00 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Robot
{
    private:    
        std::string     name;
    public:

        Robot() : name("") {}

        Robot(std::string &RobotName) : name(RobotName) {}
        void announce( void )
        {
            std::cout << name <<" Ready for battle !\n";
        }
        
};

Robot* robotArmy(int N, std::string name)
{
    Robot *robots = new Robot[N];
    for(int i = 0 ; i < N ; ++i)
    {
        robots[i] = Robot(name);
    }
    return robots;
}





int main()
{
    Robot* army = robotArmy( 9 , "Oussma");
    for(int i = 0; i < 9; ++i)
    {
        army[i].announce();
    }
    delete[] army;
    return 0;    
}


class Cat 
{
    private:
        std::string name ;
        int age;
    public:
        
        Cat(): name (""), age(0) {}
         
        Cat(std::string &CatName, int age) : name(CatName) , age(age) {}
        void meow(void)
        {
            std::cout << "I'm " << name << "and I'm "<< age << " years old\n";
        }
};

Cat *CreateShelter(int count, std::string BaseName)
{
    Cat* cats = new Cat[count];
    
    for(int i = 0; i < count ; ++i)
    {
        cats[i] = Cat(BaseName, count); 
    }
    return cats;
} 
int main()
{
    Cat* My_cat = CreateShelter(10, "-a cat -");
    for (int i = 0; i < 10; ++i)
    {
        My_cat[i].meow();
    }
    delete[] My_cat;
}