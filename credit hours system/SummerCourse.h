#include<iostream>
#include<string>
using namespace std;
#ifndef SUMMERCOURSE_H_INCLUDED
#define SUMMERCOURSE_H_INCLUDED
class summerCourse:public course
{
public:
    summerCourse()
    {
    }
    summerCourse(string n,int l,int c):course(n,l,c)
    {
        code=n+"_"+"S"+to_string(l);
    }
};
#endif // SUMMERCOURSE_H_INCLUDED
