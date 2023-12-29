/**
 * Read a set of integers into a vector. Print the sum of
 * each pair of adjaacent elements. Change your program so
 * that it prints the sum of the first and last elements
 * followed by the sum of the second and second-to-last,
 * and so on. 
*/
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    int num;
    vector<int> ivec;
    vector<int> sumadj;
    vector<int> sumopp; 
    while(cin >> num) {
        if(num == -1) break; 
        ivec.push_back(num);
    }
    for(decltype(ivec.size()) j = 1; j < ivec.size(); j++) {
        sumadj.push_back(ivec[j] + ivec[j - 1]);
    }
    for(decltype(ivec.size()) k = 0; 
        k < ivec.size() / 2; k++) {
        sumopp.push_back(ivec[k] + ivec[ivec.size() - k - 1]);
    }

    for(auto &i : sumadj) {
        cout << i << " ";
    }
    cout << endl;

    for(auto &l : sumopp) {
        cout << l << " ";
    }
    cout << endl;
    return 0;
}