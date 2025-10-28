/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:11:15 by oait-si-          #+#    #+#             */
/*   Updated: 2025/10/28 18:12:54 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include <iostream>



int main()
{
    std::string  str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF = str;


    std::cout << "\nAddress of str:                        " << &str <<std::endl;
    std::cout << "the memory address held by stringPTR:  " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:  " << &stringREF << std::endl;
    std::cout << "\n----------------------------------------------\n" << std::endl;
    std::cout << "the values :" << std::endl;
    std::cout << "the value of str:                      " << str << std::endl;
    std::cout << "the value of stringPTR:                " << *stringPTR << std::endl;
    std::cout << "the value of stringREF:                " << stringREF << std::endl;

    return 0;
}