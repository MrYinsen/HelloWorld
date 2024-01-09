/**
 * Basic matrix multiplication algorithm using multidimensional arrays.
*/
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int matrixSize;
    cin >> matrixSize;
    int matrixCells = pow(matrixSize, 2);
    int comp3[matrixCells];
    int comp4[matrixCells];
    for(int i = 0; i < matrixSize; ++i) {
        for(int j = 0; j < matrixSize; ++j) {
            cin >> comp3[i + matrixSize * j];
        }
    }
    for(int i = 0; i < matrixSize; ++i) {
        for(int j = 0; j < matrixSize; ++j) {
            cin >> comp4[i * matrixSize + j];
        }
    }
    int om1[matrixCells];
    for(int i = 0; i < matrixCells; ++i) {
        for(int j = 0; j < matrixSize; ++j) {
            if(j == 0) om1[i] = 0;
            int index = i / matrixSize * matrixSize + j; 
            om1[i] += comp3[index] * comp4[index];
        }
    }
    for(int i = 0; i < matrixCells; ++i) {
        if(i != 0 && i % matrixSize == 0) cout << endl;
        cout << om1[i] << " ";
    }
    cout << endl;
    return 0;
}