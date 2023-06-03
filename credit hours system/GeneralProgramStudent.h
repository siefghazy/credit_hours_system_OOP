#include<iostream>
#include<string>
using namespace std;
#ifndef GENERALPROGRAMSTUDENT_H_INCLUDED
#define GENERALPROGRAMSTUDENT_H_INCLUDED
class generalstudent:public student
{
public:
    friend istream&operator>>(istream&is,generalstudent&st)
    {
        cout<<"enter the student name: ";
        is>>st.name;
        cout<<"enter the student id: ";
        is>>st.id;
        cout<<"enter the student level: ";
        is>>st.level;
        return is;
    }
    friend ostream&operator<<(ostream&os,const generalstudent&st)
    {
        os<<"student name is: "<<st.name<<endl<<"student id is: "<<st.id<<endl<<"student level: "<<st.level;
        os<<endl;
        return os;
    }
    bool registerCourse(course*c)
    {
        if(noOfcourse<=6 && c->getminS()<=level)
        {
            courselist[noOfcourse]=c;
            noOfcourse++;
            return true;
        }
        else
        {
            return false;
        }
    }
    float calculateExpense()
    {
        return level*1000;
    }
};
#endif // GENERALPROGRAMSTUDENT_H_INCLUDED
