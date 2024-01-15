#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout; 
using std::endl;
using std::vector;
using std::string;
int main()
{
    vector<int> scores;
    int newScore;
    while(cin >> newScore) {
        if(newScore == -1) break;
        if(newScore > 0 && newScore <= 100) {
            scores.push_back(newScore);    
        }
    }
    const vector<string> gradeScale = {"F", "D", "C", "B", "A", "A+"};
    vector<string> finalGrades;
    for(auto it = scores.begin(); it != scores.end(); ++it) {
        if(*it < 60) {
            finalGrades.push_back(gradeScale[0]);
        }
        else {
            finalGrades.push_back(gradeScale[(*it - 50)/10]);
        }
    }

    for(auto it = finalGrades.begin(); it != finalGrades.end(); ++it) {
        cout << *it << "  ";
    }
    cout << endl;
    return 0;
}