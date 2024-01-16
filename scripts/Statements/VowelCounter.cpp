#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    int vowelCounter = 0;
    int constCounter = 0;
    string word;
    while(cin >> word) {
        for(int i = 0; i < word.length(); ++i) {
            word[i] = tolower(word[i]);
        }
        if(word == "exit") break;
        for(auto i : word) {
            switch (i) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    ++vowelCounter;
                    break;
                default:
                    ++constCounter;
            }
        }
        cout << word << " has " << vowelCounter << " and " << constCounter << " constonants." << endl;
    }
    return 0;
}