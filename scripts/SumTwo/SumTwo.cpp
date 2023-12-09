#include <iostream>
int main()
{
    int sum = 0, val = 0, finalVal = 0;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> val >> finalVal;
    std::cout << "Sum of " << val << " to " << finalVal << " inclusive is ";
    while (val <= finalVal) {
        sum += val;
        ++val;
    }
    std::cout << sum << std::endl;
    return 0;
}