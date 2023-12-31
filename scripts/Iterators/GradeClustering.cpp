// Grade clustering script
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    int grade;
    vector<int> gradeVec;
    while(cin >> grade) {
        if(grade == -1) break;
        if(grade > 100) continue;
        gradeVec.push_back(grade);
    }
    vector<int> gradeCluster(11);
    auto itCluster = gradeCluster.begin();
    for(auto it = gradeVec.begin(); 
        it != gradeVec.end(); ++it) {
        itCluster = gradeCluster.begin() + (*it)/10;
        (*itCluster)++;
    }

    for(auto it = gradeCluster.cbegin(); 
        it != gradeCluster.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}