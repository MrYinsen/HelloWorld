// Binary search algorithm
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    unsigned steps = 0;
    int sought;
    int totalCount;
    cin >> totalCount >> sought;
    vector<int> ivec;
    for(int i = 0; i != totalCount; ++i) {
        ivec.push_back(i);
    }
    auto beg = ivec.begin(), end = ivec.end();
    auto mid = ivec.begin() + (end - beg) / 2;
    while(mid != end && *mid != sought) {
        if(sought < *mid) {
            end = mid;
        } else {
            beg = mid + 1;
        }
        mid = beg + (end - beg) / 2;
        steps++;
        cout << "Upper bound: " << *end << endl;
        cout << "Mid: " << *mid << endl;
        cout << "Lower bound: " << *beg << endl;
        cout << "-----------" << endl;
    }
    if(mid == end) {
        cout << "Not found" << endl;
    } else {
        cout << "Found " << sought << " in " << steps << " steps." << endl;    
    }
    return 0;
}