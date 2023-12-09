#include <iostream>
int main()
{
    std::cout << "Enter sets of consecutive values: " << std::endl;
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal) ++cnt;
            else {
                std::cout << currVal << " occurs " 
                          << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " 
                  << cnt << " times" << std::endl;
    }
    return 0;
}