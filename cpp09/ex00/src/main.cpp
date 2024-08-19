
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

void printResult(std::map<std::string, float>& database, std::string& date, float& value)
{
    float result;
    std::map<std::string, float>::iterator it = database.find(date);

    if (it != database.end())
        result = it->second * value;
    else
    {
        it = database.lower_bound(date);
        it--;
        result = it->second * value;
    }
    std::cout << date << " => " << value << " = " << result << std::endl;
}

void validate_year(std::string copy)
{
    if (copy.size() != 10)
        throw("bad input!");
    else if (std::count(copy.begin(), copy.end(), '-') != 2)
        throw("bad input!");
    
    long value;
    char *end;

    std::string year = copy.substr(0, copy.find('-'));
    copy.erase(0, copy.find('-') + 1);
    value = strtol(year.c_str(), &end, 10);
    if (year.size() != 4 || !isdigit(year[0]) || *end != '\0' || errno == ERANGE)
        throw("bad input!");
    else if (value > current_year() || value < 2009)
        throw("Invalid year!");
    
    std::string month = copy.substr(0, copy.find('-'));
    copy.erase(0, copy.find('-') + 1);
    value = strtol(month.c_str(), &end, 10);
    if (month.size() != 2 || !isdigit(month[0]) || *end != '\0' || errno == ERANGE)
        throw("bad input!");
    else if (!(value >= 1 && value <= 12))
        throw("Invalid month!");
    

    value = strtol(copy.c_str(), &end, 10);
    if (copy.size() != 2 || !isdigit(copy[0]) || *end != '\0' || errno == ERANGE)
        throw("bad input!");
    else if (!(value >= 1 && value <= 31))
        throw("Invalid day!");
}

void readDataBase(std::ifstream& file, std::map<std::string, float>& content)
{
    std::string line;
    std::string year;
    std::string num;
    float value;
    char *end;

    std::getline(file, line);
    if (line != "date,exchange_rate")
        throw("bad format!");

    line.clear();
    errno = 0;
    while (std::getline(file, line))
    {
        if (std::count(line.begin(), line.end(), ',') != 1)
            throw("bad input(separator problem)!");
        
        year = line.substr(0, line.find_first_of(','));
        validate_year(year);
        
        num = line.substr(line.find_first_of(',') + 1);
        value = strtof(num.c_str(), &end);
        if (*end != '\0' || errno == ERANGE )
            throw("Invalid float!");
        if (value < 0)
            throw("not a positive number!");

        content.insert(std::make_pair(year, value));
    }
}

void readInput(std::map<std::string, float>& database, std::ifstream& inputFile)
{
    std::string line;
    std::string year;
    std::string num;
    float value;
    char *end;
    
    std::getline(inputFile, line);
    line.clear();
    
    while (std::getline(inputFile, line))
    {
        try
        {
            if (std::count(line.begin(), line.end(), '|') != 1 || line.find(" | ") == std::string::npos)
            {
                std::cerr << "Error: bad input => " << line << std::endl;
                continue;
            }
        
            year = line.substr(0, line.find(" | "));
            validate_year(year);

            num = line.substr(line.find(" | ") + 3);
            value = strtof(num.c_str(), &end);
            if ((!isdigit(num[0]) && num[0] != '-') || *end != '\0' || errno == ERANGE )
                throw("Invalid float!");
            if (value < 0)
                throw("not a positive number!");
            else if (value > 1000)
                throw("too large a number!");
            

            printResult(database, year, value);
        }
        catch(const char* e)
        {
            std::cerr << "Error 💀: " << e << '\n';
        }
        
    }
    
}


int main(int ac, char** av)
{
    if (ac != 2)
        return((std::cerr << RED << "Error: could not open file.\n" << END), 1);
    
    std::ifstream dataBaseFile;
    dataBaseFile.open("data.csv");
    if (!dataBaseFile.is_open())
        return((std::cerr << RED << "Error: could not open file.\n" << END), 1);
    
    std::map<std::string, float> database;
    try
    {
        readDataBase(dataBaseFile, database);
        dataBaseFile.close();
    }
    catch(const char* e)
    {
        std::cerr << "Error in Database💥: " << e << '\n';
        dataBaseFile.close();
        database.clear();
        return(1);
    }

    std::ifstream inputFile;
    inputFile.open(av[1]);
    if (!inputFile.is_open())
    {
        database.clear();
        return((std::cerr << RED << "Error: could not open file.\n" << END), 1);
    }
    readInput(database, inputFile);
    database.clear();
    inputFile.close();

    return(0);
}
