#ifndef RPN_HPP
#define RPN_HPP


#define END   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <algorithm>
#include <ctype.h>

void err(int opc);
bool checkChar(char c);
bool isTokenOpr(char c);
void RPN(std::string arg);
int calculator(std::stack<int>& datastack, char opt, int& flag);

#endif