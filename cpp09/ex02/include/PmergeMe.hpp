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
void printResult(long long begin, long long end, std::vector<int>* vec, std::list<int>* lst, int size);
long long getTime();
void printText(std::vector<int> copy);
void printVector(const std::vector<int>& vec);
void print_lista(const std::list<int>& lista);

#endif