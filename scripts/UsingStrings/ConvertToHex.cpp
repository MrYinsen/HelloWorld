#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    const string hexValues = "0123456789ABCDEF";
    string hexNumber; 
    string::size_type n;
    string hexInput;
    while(cin >> n) {
        if (n < hexValues.size()) {
            hexNumber += hexValues[n];
        }
    }
    cout << "Hex number: " << hexNumber << endl;
    return 0;
}