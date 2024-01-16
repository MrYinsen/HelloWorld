#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
    string topWord;
    string prevInput = "\0";
    string input;
    int topRepetitions = 0;
    int currentRepetitions = 0;
    cout << "Submit a string: " << endl;
    while(cin >> input) {
        for(auto& i : input) i = tolower(i);
        if(currentRepetitions > topRepetitions) {
            topWord = prevInput;
            topRepetitions = currentRepetitions;
        }
        if(input == "exit") 
            break;
        if(input == prevInput) 
            ++currentRepetitions;
        else
            currentRepetitions = 1;
        prevInput = input;
    }
    cout << topWord << " occured " << topRepetitions << " times." << endl;
}