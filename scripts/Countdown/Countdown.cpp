#include <iostream>
int main()
{
    std::cout << "Enter a number to count down from:" << std::endl;
    int var1 = 0;
    std::cin >> var1;
    std::cout << "Countdown beginning!" << std::endl;
    while (var1 >= 0) {
        std::cout << var1-- << std::endl;
    }
    return 0;
}