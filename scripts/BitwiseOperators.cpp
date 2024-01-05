/**
 * Store information about pass/fail quiz of a 30 person course. Index each person by bit position.
*/
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    unsigned long q1 = 0;
    string pass;
    while(pass != "True" && pass != "False") {
        cin >> pass;
        pass[0] = toupper(pass[0]);
    }
    if(pass == "True") {
        q1 |= 1UL << 27;    
    } else {
        q1 &= ~(1UL << 27);
    }

    bool status = q1 & (1UL << 27);
    cout << (status ? "Passed!" : "Failed") << endl; 
    return 0;
}