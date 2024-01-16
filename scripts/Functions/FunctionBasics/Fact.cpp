#include "FunctionBasics.h"

void fact(int val, int& ref)
{
    for(int i = 1; i <= val; ++i) ref *= i;
}