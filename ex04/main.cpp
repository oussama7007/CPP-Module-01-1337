/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:26:09 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/06 16:24:45 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    t()
{
    system("lsof -c a.out");
}
void    create_replace_file( std::string content, char **av)
{
    std::ofstream   out_file_stream;
    out_file_stream.open((std::string(av[1]) + ".replace").c_str());
    
    
}
int main(int ac , char **av )
{
    atexit(t);
    std::string content;
    std::string line;
    std::ifstream	in_file; // input file stream (read from a file) 
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
    while(std::getline(in_file, line))
    {
        content += line;
        content += '\n'; 
    }
    in_file.close();
    create_replace_file(content, av);
    return 0;
}
