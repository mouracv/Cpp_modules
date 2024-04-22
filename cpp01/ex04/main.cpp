/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:02:15 by aleperei          #+#    #+#             */
/*   Updated: 2024/04/22 17:36:37 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

void replace(std::string& input, const std::string& tofind, const std::string&  toreplace)
{
    int i = 0;
    while (input.find(tofind, i) != std::string::npos)
    {
        input.find(i, (i + tofind.size()));
        input.insert(i, toreplace.c_str());
        i += tofind.size();
    }
    
}

int main(int argc, char* argv[])
{
    std::ifstream input_file;
    std::ofstream output_file;
    std::string filename;
    std::string input;
    
    if (argc != 4)
    {
        std::cerr << "Wrong number of arguments!" << std::endl;
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