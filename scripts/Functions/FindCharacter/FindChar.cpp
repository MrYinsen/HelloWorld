#include <iostream>
#include <string>
#include "FindChar.h"
using std::string;

string::size_type findChar(const string &phrase, char letter, string::size_type &occurs)
{
    auto firstIndex = phrase.size();
    occurs = 0;
    for(decltype(firstIndex) i = 0; i < phrase.size(); ++i) {
        if(phrase[i] == letter) {
            if(occurs == 0)
                firstIndex = i;
            ++occurs;
        }
    }
    return firstIndex;
}