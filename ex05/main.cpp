/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:46:20 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/07 21:00:12 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main()
{
    Harl harl;
    
    std::cout << "=== Test 1: DEBUG level ===" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;
    
    std::cout << "=== Test 2: INFO level ===" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;
    
    std::cout << "=== Test 3: WARNING level ===" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;
    
    std::cout << "=== Test 4: ERROR level ===" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;
    
    std::cout << "=== Test 5: Invalid level ===" << std::endl;
    harl.complain("CRITICAL");
    std::cout << std::endl;
    
    std::cout << "=== Test 6: Empty string ===" << std::endl;
    harl.complain("");
    std::cout << std::endl;
    
    std::cout << "=== Test 7: Lowercase ===" << std::endl;
    harl.complain("debug");
    std::cout << std::endl;
    
    std::cout << "=== Test 8: Multiple objects ===" << std::endl;
    Harl harl1, harl2;
    harl1.complain("DEBUG");
    harl2.complain("ERROR");
}