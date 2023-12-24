#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n1 = 0, n2 = 0;
    cin >> n1 >> n2;
    while(n2 >= n1) {
        cout << n1 << endl;
        n1++;
    }
    return 0;
}