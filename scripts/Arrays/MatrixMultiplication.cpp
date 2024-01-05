/**
 * Basic matrix multiplication algorithm using multidimensional arrays.
*/
#include <iostream>
#include <random>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
int main()
{
    const size_t items = 3;
    int m1[items][items] = {
        {3, 3, 3},
        {2, 2, 2},
        {1, 1, 1},
    };
    int m2[items][items] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };
    int om[items][items] = {
        (0),
        (0),
        (0)
    };
    for(int i = 0; i < items; ++i) {
        for(int k = 0; k < items; ++k) {
            for(int j : m1[i]) {
                om[k][i] += j * m2[k][i];
            }    
        }
        cout << endl;
    }

    for(int i = 0; i < items; ++i) {
        for(int j = 0; j < items; ++j) {
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "x " << endl;

    for(int i = 0; i < items; ++i) {
        for(int j = 0; j < items; ++j) {
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "= " << endl;
    
    for(int i = 0; i < items; ++i) {
        for(int j = 0; j < items; ++j) {
            cout << om[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}