#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string concatStringNoSpace;
    string concatStringSingleSpace;
    string word;
    while(cin >> word) {
        concatStringNoSpace += word;
        concatStringSingleSpace += word + " ";
    }
    cout << concatStringNoSpace << endl;
    cout << concatStringSingleSpace << endl;
    return 0;
}