#include <iostream>

#ifndef LAB5_PAIR_H
#define LAB5_PAIR_H

class Pair
{
protected:
    int first; int second;
public:
    virtual ~Pair();
    Pair();
    Pair(int ft, int sd);
    virtual int getF();
    virtual int getS();
    virtual void setP(int _ft, int _st);
    virtual void Print();
    Pair& operator=(const Pair&);
    friend Pair operator +(Pair obj1,Pair obj2);
};

class Complex: public Pair
{
    int re; int im;
public:
    ~Complex();
    Complex();
    Complex(int r, int i);
    void setP(int _re, int _im);
    int getF();
    int getS();
    void Print();
    friend Complex operator -(Complex obj1, Complex obj2);
    friend Complex operator *(Complex obj1, Complex obj2);

};

Pair operator +(Pair obj1,Pair obj2);
Complex operator -(Complex obj1, Complex obj2);
Complex operator *(Complex obj1, Complex obj2);

#endif //LAB5_PAIR_H