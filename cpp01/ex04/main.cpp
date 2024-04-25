/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:02:15 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/25 15:11:30 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"  

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

void replace(std::string& input, const std::string& tofind, const std::string&  toreplace)
{
    int i = 0;
    while (input.find(tofind, i) != std::string::npos)
    {
        i = input.find(tofind, i);
        input.erase(i, (tofind.size()));
        input.insert(i, toreplace.c_str());
        i += toreplace.size();
    }
    
}

int main(int argc, char* argv[])
{
    std::ifstream input_file;
    std::ofstream output_file;
    std::string filename;
    std::string input;
    
    if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0])
    {
        std::cerr << "Invalid arguments!" << std::endl;
        return (1);
    }
    
    input_file.open(argv[1]);
    if (!input_file.is_open())
    {
        std::cerr << "Invalid stream!" << std::endl;
        return (1);
    }
    
    filename = argv[1];
    filename.append(".replace");
    
    output_file.open(filename.c_str());
    if (!output_file.is_open())
    {
        input_file.close();
        std::cerr << "Invalid stream!" << std::endl;
        return (1);
    }
    
    while (std::getline(input_file, input))
    {
        replace(input, argv[2], argv[3]);
        output_file << input;
        if (!input_file.eof())
            output_file << '\n';
    }
        
    output_file.close();
    input_file.close();
    return (0);
}
