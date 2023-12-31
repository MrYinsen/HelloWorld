/**
 * Write a program to create a vector with ten int elements.
 * Using an iterator, assign each element a value that is 
 * twice its current value. Test your program by printing
 * the vector.
*/
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
    vector<int> ivec (10, 1);
    for(auto it = ivec.begin(); it != ivec.end(); ++it) {
        // it += 1;
        *it *= 2;
    }

    for(auto it2 = ivec.cbegin();
        it2 != ivec.cend(); ++it2)
        cout << *it2 << " ";
    cout << endl;
}
