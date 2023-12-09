#include <iostream>
int main()
{
    std::cout << "Enter a set of numbers to sum:" << std::endl;
    int value = 0;
    int sum = 0;
    while(std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}