
#include <iostream>
#include <iomanip>
#include <fstream>
#include <exception>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <map>


#define END   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 


/*else
        {
            if (line.find(" | ") == std::string::npos)
            {
                std::cout << "pedro" << std::endl;
                return;               
            }
            
            year = line.substr(0, line.find_first_of(" |"));
            // std::cout << "year: " << year << std::endl;
            if (year.size() != 10)
            {
                std::cout << "jessica" << std::endl;
                return;               
            }
            
            num = line.substr(line.find_last_of("| ") +1);

            // std::cout << "num: " << num << std::endl;
            if (num.find(' ') != std::string::npos)
            {
                std::cout << "gabo" << std::endl;
                return;
            }

            value = strtof(num.c_str(), &end);
            if (*end != '\0' || errno == ERANGE )
            {
                std::cout << "leo" << std::endl;
                return;               
            }
            if (value < 0)
            {
                std::cout << "luca" << std::endl;
                return;               
            }
        }*/

void printMap(const std::map<std::string, float>& myMap) {
    // Iterando sobre o map usando iteradores explícitos
    for (std::map<std::string, float>::const_iterator it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }
}

void read_database(std::ifstream& file, std::map<std::string, float>& content)
{
    std::string line;
    std::string year;
    std::string num;
    float value;
    char *end = NULL;

    std::getline(file, line);
    if (line == "date,exchange_rate")
        throw("bad input!");

    line.clear();
    errno = 0;
    while (std::getline(file, line))
    {
        //ver virgulas e pipes
        if (std::count(line.begin(), line.end(), ',') != 1)
            throw("bad input!");
        
        year = line.substr(0, line.find_first_of(','));
        if (year.size() != 10)
            throw("bad input!");
        
        num = line.substr(line.find_first_of(',') + 1);
        value = strtof(num.c_str(), &end);
        if (*end != '\0' || errno == ERANGE )
            throw("bad input!");
        if (value < 0)
            throw("not a positive number!");
        //chech date
        content.insert(std::make_pair(year, value));
        line.clear();
    }
}




int main(int ac, char** av)
{
    (void)av;
    if (ac != 2)
        return((std::cerr << RED << "Error: could not open file.\n" << END), 1);
    
    std::ifstream dataBaseFile;
    dataBaseFile.open("database/data.csv");
    if (!dataBaseFile.is_open())
        return((std::cerr << RED << "Error: could not open file.\n" << END), 1);
    
    std::map<std::string, float> database;
    try
    {
        read_database(dataBaseFile, database);
        dataBaseFile.close();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error 💀:" << e.what() << '\n';
        dataBaseFile.close();
        database.clear();
        return(1);
    }
    

    // std::ifstream inputFile;
    // inputFile.open("database/input.csv");
    // if (!inputFile.is_open())
    //     return((std::cout << RED << "Error: could not open file.\n" << END), 1);
    
    // std::map<std::string, float> input;
    // read_database(inputFile, input, PIPE);
    // printMap(input);
    return(0);
}