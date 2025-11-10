/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:26:09 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/10 15:56:37 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


void    create_replaced_file( std::string content, char **av)
{
    std::ofstream   out_file_stream;

    std::string s1 = av[2];
    std::string s2 = av[3];
    if(s1.empty())
    {
            std::cout << "Error: The string to find (s1) cannot be empty." << std::endl;
            return;
    }
    out_file_stream.open((std::string(av[1]) + ".replace").c_str());
    if(!out_file_stream.is_open())
    {
            std::cout << "Error: Could not create output file." << std::endl;
            return ;
    }
    size_t pos = content.find(s1);
    while(pos != std::string::npos)
    {
        content.erase(pos, s1.length());
        
        content.insert(pos, s2);
        
        pos = content.find(s1, pos + s2.length());
        
    }
    out_file_stream << content;
    out_file_stream.close();
}
int main(int ac , char **av )
{
    std::string content ;
    std::string line;
    std::ifstream	input_file_stream(av[1]); 
    
    if (ac != 4)
	{
		std::cout << "Error: please enter filenaem, old_string, new_string" << std::endl;
		return (1);
	}
   
    
    if(!input_file_stream.is_open())
    {
        std::cout << "Error: Could not open input file." << std::endl;
        return 1;
    }

    input_file_stream.seekg(10, std::ios::end);
    std::streamsize size = input_file_stream.tellg();
    input_file_stream.seekg(0, std::ios::beg);
    content.resize(size);
    
    input_file_stream.read(&content[0], size);
    
    input_file_stream.close();
    create_replaced_file(content, av);
    return 0;
}
