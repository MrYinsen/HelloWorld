#include <iostream>
#include <string>
#include "FindChar.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string::size_type i = 0;
    std::string::size_type firstIndex = findChar("Hello world", 'o', i);

    cout << "The first occurrence of \'o\' is at index " << firstIndex << " "; 
    cout << "and it appears a total of " << i << " times." << endl;
    return 0;
}