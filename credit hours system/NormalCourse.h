#include<iostream>
#include<string>
using namespace std;
#ifndef NORMALCOURSE_H_INCLUDED
#define NORMALCOURSE_H_INCLUDED
class normalcourse:public course
{
public:
    normalcourse() {}
    normalcourse(string n,int l,int c):course(n,l,c)
    {
        code=n+"_"+"N"+to_string(l);
    }
};
#endif // NORMALCOURSE_H_INCLUDED
