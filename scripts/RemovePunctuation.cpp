#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string input;
    string output;
    cin >> input;
    for(decltype(input.size()) index = 0; index != input.size(); index++) {
        if(!ispunct(input[index])) {
            output += input[index];
        }
    }
    cout << output << endl;
    return 0;
}
