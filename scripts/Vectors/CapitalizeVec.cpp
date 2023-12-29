/**
 * Read a sequence of words from cin and store the values in a
 * vector. After you've read all the words, process the vector
 * and change each word to uppercase. Print the transformed 
 * elements, eight words to a line.
*/
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
    string word;
    vector<string> svec;
    while(cin >> word) {
        if(word == "exit") break;
        svec.push_back(word);
    }
    for(auto &i : svec) {
        for(auto &j : i) {
            j = toupper(j);
        }
    }
    uint count = 0;
    for(auto &k : svec) {
        cout << k << " ";
        count++; 
        if(count == 8) {
            count = 0;
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}