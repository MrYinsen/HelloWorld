#ifndef FUNCTION_BASIC_H
#define FUNCTION_BASIC_H
#include <initializer_list>

int abs(int);
void fact(int, int&);
int countCalls();
void addValues(std::initializer_list<int>);

#endif