#include <iostream>
#include <string>
#include "SwapValues.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n = 0, i = 0;
    cout << "Enter two numbers: " << endl;
    cin >> n >> i;
    int *p = &n, *q = &i;
    swap(p, q);
    cout << *p << " " << *q << endl;
    return 0;
}