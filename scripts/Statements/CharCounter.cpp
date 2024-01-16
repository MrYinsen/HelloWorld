#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
int main()
{
    int vowelCounter = 0;
    int constCounter = 0;
    int blankCounter = 0;
    int tabCounter = 0;
    int nlineCounter = 0;
    int ffCounter = 0;
    int flCounter = 0;
    int fiCounter = 0;
    string input;
    string finalInput;
    cout << "Submit your input below: " << endl;
    while(getline(cin, input)) {
        for(auto& i : input) tolower(i);
        if(input == "exit") break;
        finalInput += input + '\n';
    }
    cout << "------" << endl;
    char prevCh = ' ';
    for(auto& ch : finalInput) {
        ch = tolower(ch);
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowelCounter;
                if(prevCh == 'f' && ch == 'i') {
                    ++fiCounter;
                }
                break;
            case ' ':
                ++blankCounter;
                break;
            case '\t':
                ++tabCounter;
                break;
            case '\n':
                ++nlineCounter;
                break;
            default:
                if(prevCh == 'f') {
                    switch(ch) {
                        case 'f':
                            ++ffCounter;
                            break;
                        case 'l':
                            ++flCounter;
                            break;
                    }
                }
                ++constCounter;
        }
        prevCh = ch;
    }
    cout << "We've collected the following statistics for the input: " << endl;
    cout << "Vowels: " << vowelCounter << endl;
    cout << "Constonants: " << constCounter << endl;
    cout << "Blank spaces: " << blankCounter << endl;
    cout << "Tabs: " << tabCounter << endl;
    cout << "Newlines: " << nlineCounter << endl;
    cout << "\'ff\' occurrences: " << ffCounter << endl;
    cout << "\'fl\' occurrences: " << flCounter << endl;
    cout << "\'fi\' occurrences: " << fiCounter << endl;
    return 0;
}