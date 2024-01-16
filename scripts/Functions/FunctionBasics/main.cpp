#include <iostream>
#include <string>
#include <vector>
#include "FunctionBasics.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{   
    int product = 1;
    int& ref = product;
    int val;
    cout << "Choose a value and we'll calculate the factorial: " << endl;
    cin >> val;
    fact(val, ref);
    cout << product << endl;
    cout << "Choose a value and we'll calculate the absolute value: " << endl;
    cin >> val;
    cout << abs(val) << endl;
    cout << countCalls() << " " << countCalls() << " " << countCalls() << endl;
}