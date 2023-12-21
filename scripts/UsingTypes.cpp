#include <iostream>
int main()
{
    typedef int num; 
    num v1 = 1;
    num v2 = 2;

    std::cout << "int -> num " << v1 + v2 << std::endl;
    
    typedef double dub;
    dub d1 = 1.2;
    dub d2 = 1.4;

    std::cout << "double -> dub " << d1 + d2 << std::endl;

    typedef double* ptrDub;
    ptrDub ptr = &d1;
    *ptr = 100.1;

    std::cout << "double* -> ptrDub " << d1 + d2 << std::endl;

    typedef double dub1;
    dub1 d3 = 2.2;

    std::cout << "mix and match aliases " << d3 + d1 << std::endl;

    typedef char cstr;
    cstr c1 = 'a';

    typedef char *pstr;
    pstr pc1 = &c1;

    std::cout << "char -> cstr, char* -> pstr " << *pc1 << std::endl;

    *pc1 = 'b';

    std::cout << "char -> cstr, char* -> pstr " << c1 << std::endl;
    
    auto a1 = 1;
    decltype(v1) dt1 = 3;

    std::cout << "auto + decltype " << a1 + dt1 << std::endl;

    return 0;
}