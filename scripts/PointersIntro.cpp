#include <iostream>

void printNumber(void *ptr, char type) {
    if (type == 'i') {
        std::cout << "It's an integer: " << (*(int*)ptr) << std::endl;
    } else if (type == 'f') {
        std::cout << "It's a floating point number: " << (*(float*)ptr) << std::endl;
    }
}

int main() 
{
    int *ip1, *ip2;
    int a = 5, b = 10;

    ip1 = &a;
    ip2 = &b;

    *ip1 = 10;
    *ip2 = 20;

    std::cout << "First pass (basic assignment): " << a << " " << b << std::endl;

    *ip1 = 35;
    *ip2 = 50;

    std::cout << "Second pass (changed): " << a << " " << b << std::endl;

    int &ptr = *ip1;
    int *ip3 = ip2;
    ptr = 1000;
    *ip3 = 100;

    std::cout << "Third pass (second order change): " << a << " " << b << std::endl;

    int derefVar1 = *ip1;
    int derefVar2 = *ip2;

    std::cout << "Fourth pass (deref): " << derefVar1 << " " << derefVar2 << std::endl;

    if(ip3 == ip2) {
        std::cout << "Obviously they're equal!" << std::endl;
    }
    if(ip3 == ip1) {
        std::cout << "Uh oh, you're confused" << std::endl;
    } else {
        std::cout << "There we go, lol" << std::endl;
    }

    float f = 3.1;

    printNumber(ip1, 'i');
    printNumber(&f, 'f');
}