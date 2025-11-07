/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:26:09 by oait-si-          #+#    #+#             */
/*   Updated: 2025/11/06 21:54:15 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


/*
test it
std::ofstream (Output Stream):
If the file does not exist: It creates a new, empty file for you.
If the file does exist: By default, it erases all the content 
of the file (truncates it) so you can start writing from the beginning.
*/
void    t()
{
    system("lsof -c a.out");
}
void    create_replaced_file( std::string content, char **av)
{
    std::ofstream   out_file_stream;
    out_file_stream.open((std::string(av[1]) + ".replace").c_str());
    if(!out_file_stream.is_open())
    {
            std::cout << "Error: Could not create output file." << std::endl;
            return ;
    }
    std::string s1 = av[2];
    std::string s2 = av[3];
    if(s1.empty())
    {
            std::cout << "Error: The string to find (s1) cannot be empty." << std::endl;
            return;
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
    atexit(t);
    std::string content;
    std::string line;
    std::ifstream	input_file_stream; // input file stream (read from a file) 
    if (ac != 4)
	{
		std::cout << "Error: please enter filenaem, old_string, new_string" << std::endl;
		return (1);
	}
    input_file_stream.open(av[1]); // file does not exist., is is a dir , invalid path 
    
    if(!input_file_stream.is_open())
    {
        std::cout << "Error: Could not open input file." << std::endl;
        return 1;
    }
    while(std::getline(input_file_stream, line))
    {
        content += line;
        if(input_file_stream.peek() != EOF)
            content += '\n'; 
    }

    input_file_stream.close();
    create_replaced_file(content, av);
    return 0;
}
