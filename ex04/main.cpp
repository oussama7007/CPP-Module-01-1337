/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:26:09 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/06 12:15:38 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


int main(int ac , char **av )
{
    std::  ifstream	in_file; // input file stream (read from a file) 
    if (ac != 4)
	{
		std::cout << "Error: please enter filenaem, old_string, new_string" << std::endl;
		return (1);
	}
    in_file.open(av[1]); // file does not exist., is is a dir , invalid path 
    
    if(!in_file.is_open())
    {
        std::cout << "Error: Could not open input file." << std::endl;
        return 1;
    }
    while()
}
