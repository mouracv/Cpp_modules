#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#define END   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cerrno>
#include <vector>
#include <list>
#include <sys/time.h>


void err(int opc);
bool fillConteiners(char** av, std::vector<int>& vectorContent, std::list<int>& listContent);
bool isSorted(std::vector<int>::iterator first, std::vector<int>::iterator last);

#endif