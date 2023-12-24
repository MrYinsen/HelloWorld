#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string input = "";
    cin >> input;
    for(decltype(input.size()) index = 0; index != input.size(); index++) {
        input[index] = 'X';
    }
    cout << input << endl;
    return 0;
}