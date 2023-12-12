#include <iostream>
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

    int *ip3 = ip2;
    *ip3 = 100;

    std::cout << "Third pass (second order change): " << b << std::endl;

    int derefVar1 = *ip1;
    int derefVar2 = *ip2;

    std::cout << "Fourth pass (deref): " << derefVar1 << " " << derefVar2 << std::endl;
}