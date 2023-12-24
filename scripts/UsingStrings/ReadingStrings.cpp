#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    int num = 1;

    //Word by word
    // string word;
    // while(cin >> word) {
    //     cout << num << ": " << word << endl;
    //     num++;
    // }

    //Line by line
    string line;
    while(getline(cin, line)) {
        cout << num << ": " << line << " (amount char: " << line.size() << ")" << endl;
        num++;
    }
    return 0;
}