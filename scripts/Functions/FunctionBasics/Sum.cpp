#include <iostream>
#include "FunctionBasics.h"

void addValues(std::initializer_list<int> values) {
    int sum = 0;
    for (int value : values) {
        sum += value;
    }
    std::cout << sum << std::endl;
}