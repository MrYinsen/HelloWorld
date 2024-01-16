#include "FunctionBasics.h"

int countCalls()
{
    static int counter = 0;
    return ++counter;
}