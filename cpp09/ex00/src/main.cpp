
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <map>

//For the time
#include <ctime>


#define END   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 



int current_year()
{
  std::time_t t = std::time(NULL);
  std::tm *const pTInfo = std::localtime(&t);
  return(1900 + pTInfo->tm_year);
}

void printMap(const std::map<std::string, float>& myMap) {
    // Iterando sobre o map usando iteradores explícitos
    for (std::map<std::string, float>::const_iterator it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }
}

void validate_year(std::string copy)
{
    if (copy.size() != 10)
        throw("bad size");
    else if (std::count(copy.begin(), copy.end(), '-') != 2)
        throw("erro");
    
    long value;
    char *end = NULL;

    std::string year = copy.substr(0, copy.find('-'));
    copy.erase(0, copy.find('-') + 1);
    value = strtol(year.c_str(), &end, 10);
    if (!isdigit(year[0]) || *end != '\0' || errno == ERANGE)
        throw("1bad input!");
    else if (value >= current_year())
        throw("bad year!");
    
    std::string month = copy.substr(0, copy.find('-'));
    copy.erase(0, copy.find('-') + 1);
    value = strtol(month.c_str(), &end, 10);
    if (!isdigit(month[0]) || *end != '\0' || errno == ERANGE)
        throw("6bad input!");
    else if (!(value >= 1 && value <= 12))
        throw("bad month");
    

    value = strtol(copy.c_str(), &end, 10);
    if (!isdigit(copy[0]) || *end != '\0' || errno == ERANGE)
        throw("7bad input!");
    else if (!(value >= 1 && value <= 31))
        throw("bad day");
}

void readDataBase(std::ifstream& file, std::map<std::string, float>& content)
{
    std::string line;
    std::string year;
    std::string num;
    float value;
    char *end = NULL;

    std::getline(file, line);
    if (line != "date,exchange_rate")
        throw("2bad input!");

    line.clear();
    errno = 0;
    while (std::getline(file, line))
    {
        if (std::count(line.begin(), line.end(), ',') != 1)
            throw("3bad input!");
        
        year = line.substr(0, line.find_first_of(','));
        validate_year(year);
        
        num = line.substr(line.find_first_of(',') + 1);
        value = strtof(num.c_str(), &end);
        if (*end != '\0' || errno == ERANGE )
            throw("5bad input!");
        if (value < 0)
            throw("not a positive number!");
        //chech date
        content.insert(std::make_pair(year, value));
        num.clear();
        line.clear();
    }
}

void printResult(std::map<std::string, float>& database, std::string& date, float& value)
{
    float result;
    std::map<std::string, float>::iterator it = database.find(date);

    if (it != database.end())
        result = it->second * value;
    else
    {
        it = database.lower_bound(date);
        result = it->second * value;
    }
    std::cout << date << " => " << value << " = " << result << std::endl;
}

void readInput(std::map<std::string, float>& database, std::ifstream& inputFile)
{
    std::string line;
    std::string year;
    std::string num;
    // float value;
    // char *end = NULL;
    (void)database;
    std::getline(inputFile, line);
    line.clear();
    
    while (std::getline(inputFile, line))
    {
        try
        {
            if (std::count(line.begin(), line.end(), '|') != 1 || line.find(" | ") == std::string::npos)
                throw("8bad input!");
            
            // size_t beg = line.find(" | ");

            year = line.substr(0, line.find(" | "));
            validate_year(year);

            num = line.substr(line.find(" | ") + 3);
            std::cout << "num: (" << num << ")"<< std::endl;
        //     value = strtof(num.c_str(), &end);
        //     if (!isdigit(num[0]) || *end != '\0' || errno == ERANGE )
        //         throw("9bad input!");
        //     if (value < 0)
        //         throw("Error: not a positive number!");
        //     else if (value > 1000)
        //         throw("Error: too large a number!");
            

        //     printResult(database, year, value);
        }
        catch(const char* e)
        {
            std::cerr << e << '\n';
        }
        
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
        readDataBase(dataBaseFile, database);
        dataBaseFile.close();
        // printMap(database);
    }
    catch(const char* e)
    {
        std::cerr << "Error 💀: " << e << '\n';
        dataBaseFile.close();
        database.clear();
        return(1);
    }
    

    std::ifstream inputFile;
    inputFile.open("database/input.csv");
    if (!inputFile.is_open())
    {
        database.clear();
        return((std::cout << RED << "Error: could not open file.\n" << END), 1);
    }
    readInput(database, inputFile);
    // read_database(inputFile, input, PIPE);
    // printMap(input);
    return(0);
}