#include <iostream>
#include "Pair.h"

int main() {
    std::cout << "Hello! " << std::endl;
    Pair *p;
    Pair oP(12,16); Pair oP1(4,1);
    Complex oC(4,8); Complex oC1(2,6);
    Complex m;
    Pair o;
    Complex u;
    p=&oP;
    p->Print();
    p=&oC;
    p->Print();
    std::cout << std::endl<< "Oper.1(+) " << std::endl;
    o=oP+oP1;
    o.Print();
    //o=oC;
    std::cout << "Oper.2(-) " << std::endl;
    m=oC-oC1;
    m.Print();
    std::cout << "Oper.3(*) " << std::endl;
    u=oC1*oC;
    u.Print();

    return 0;
}