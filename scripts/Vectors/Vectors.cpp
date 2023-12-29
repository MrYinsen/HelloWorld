#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main() {
    int num;
    vector<int> ivec;
    while(cin >> num) {
        if(num == -1) break;
        ivec.push_back(num);
    }

    for(decltype(ivec.size()) j = 0; j < ivec.size(); j++) {
        cout << ivec[j] << " ";
    }
    cout << endl;
    return 0;
}