#include<iostream>
#include<string>
using namespace std;
#ifndef COURSE_H_INCLUDED
#define COURSE_H_INCLUDED
class course
{
protected:
    string name;
    string code=" ";
    int minStudentlevel;
    int creditHours;
public:
    course() {}
    course(string n,int l,int c)
    {
        name=n;
        minStudentlevel=l;
        creditHours=c;
    }
    friend ostream&operator<<(ostream&os,const course&st)
    {
        cout<<"    code: "<<st.code<<endl;
        cout<<"    credit hours: "<<st.creditHours<<endl;
        cout<<"    level: "<<st.minStudentlevel<<endl;
        return os;
    }
    int getminS()
    {
        return minStudentlevel;
    }
    int getcreditHours()
    {
        return creditHours;
    }
    string getCode()
    {
        return code;
    }

};
#endif // COURSE_H_INCLUDED
