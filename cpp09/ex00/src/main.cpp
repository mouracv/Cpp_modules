
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <map>


#define END   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 

void read_database(std::ifstream& file, std::map<std::string, float>& database)
{
    std::string line;
    std::string year;
    std::string value;

    std::getline(file, line);
    line.clear();
    while (true)
    {
        if (!std::getline(file, line, ','))
            break;
        
        year = line;
        std::getline(file, line);
        std::istringstream box(line);
        // std::cout << std::fixed << std::setprecision(2);
        float value ;
        box >> value;
        database.insert(std::make_pair(year, value));
    }
    
}


void printMap(const std::map<std::string, float>& myMap) {
    // Iterando sobre o map usando iteradores explícitos
    for (std::map<std::string, float>::const_iterator it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }
}

int main(int ac, char** av)
{
    (void)av;
    if (ac != 2)
        return((std::cout << RED << "Error: could not open file.\n" << END), 1);
    
    std::ifstream dataBaseFile;
    dataBaseFile.open("database/data.csv");
    if (!dataBaseFile.is_open())
        return((std::cout << RED << "Error: could not open file.\n" << END), 1);
    
    std::map<std::string, float> database;
    read_database(dataBaseFile, database);
    printMap(database);
    database.clear();
    dataBaseFile.close();
    return(0);
}