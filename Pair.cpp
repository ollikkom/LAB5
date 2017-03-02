#include "Pair.h"
#include <iostream>

Pair::~Pair() {}

Pair::Pair()
{
    first = 0;
    second = 0;
}
Pair::Pair(int ft, int sd)
{
    first= ft;
    second= sd;
}
int Pair::getF()
{
    return first;
}
int Pair::getS()
{
    return second;
}
void Pair::setP(int _ft, int _st)
{
    first= _ft;
    second= _st;
}
Pair& Pair::operator=(const Pair& p)
{
    if(&p==this) return *this;
    first= p.first;
    second= p.second;
    return *this;
}
Pair operator+(Pair obj1, Pair obj2)
{
    Pair res;
    res.first= obj1.first + obj1.second;
    res.second= obj2.first + obj2.second;
    return res;
}
void Pair::Print()
{
    std::cout<<"First= "<< first<<"; Second= "<< second<<std::endl;

}

Complex::~Complex() {}

Complex::Complex()
{
    re = 0;
    im = 0;
}
Complex::Complex(int r, int i)
{
    re = r;
    im = i;
}
void Complex::setP(int _re, int _im)
{
    re= _re;
    im= _im;
}
int Complex::getF()
{
    return re;
}
int Complex::getS()
{
    return im;
}
Complex operator -(Complex obj1, Complex obj2)
{
    Complex res;
    res.re= obj1.re - obj1.im;
    res.im= obj2.re - obj2.im;
    return res;

}
Complex operator *(Complex obj1, Complex obj2)
{
    Complex res;
    res.re=obj1.re*obj2.re - obj1.im*obj2.im;
    res.im=obj1.re*obj2.im + obj1.im*obj2.re;
    return res;
}
void Complex::Print()
{
    std::cout<<"Real= "<< re<<"; Imaginary= "<< im<<std::endl;

}
