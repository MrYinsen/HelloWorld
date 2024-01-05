#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
int main()
{
    int ia[10];
    for(int i = 0; i < 10; ++i) {
        ia[i] = i;
    }
    int nia[10];
    for(int i = 0; i < 10; ++i) {
        nia[i] = ia[i];
    }
    
    cout << "Using pointers:" << endl;
    int *p = nia;
    int *e = &nia[10];
    for(int *p = nia; p < e; ++p) {
        cout << *p << " ";
    }
    cout << endl;

    cout << "Using begin and end iterators for arrays:" << endl;
    int *beg = begin(nia);
    int *en = end(nia);
    while(beg != en) {
        cout << *(beg) << " ";
        beg++;
    }
    cout << endl;
    return 0;
}