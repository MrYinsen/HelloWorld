#include <iostream>
int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r1 = 10;
    r2 = 1.1;

    std::cout << "First pass: " << i << " " << d << std::endl;

    r1 = 100;
    r2 = 1.23;

    std::cout << "Second pass: " << i << " " << d << std::endl;
}