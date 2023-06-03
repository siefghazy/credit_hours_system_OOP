#include<iostream>
#include<string>
using namespace std;

#ifndef SPECIALPROGRAMSTUDENT_H_INCLUDED
#define SPECIALPROGRAMSTUDENT_H_INCLUDED
class specialStudent:public student
{
public:
    friend istream&operator>>(istream&is,specialStudent&st)
    {
        cout<<"enter the student name: ";
        is>>st.name;
        cout<<"enter the student id: ";
        is>>st.id;
        cout<<"enter the student level: ";
        is>>st.level;
        return is;
    }
    friend ostream&operator<<(ostream&os,const specialStudent&st)
    {
        os<<"student name is: "<<st.name<<endl<<"student id is: "<<st.id<<endl<<"student level: "<<st.level;
        os<<endl;
        return os;
    }
    bool registerCourse(course*c)
    {
        if(noOfcourse<=6)
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
        int sumC=0;
        for(int i =0 ; i<noOfcourse; i++)
        {
            sumC+=courselist[i]->getcreditHours();
        }
        return sumC*500;

    }
};
#endif // SPECIALPROGRAMSTUDENT_H_INCLUDED
