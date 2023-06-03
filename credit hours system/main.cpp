#include<iostream>
#include<string>

#include "Rational.h"
#include "Course.h"
#include "NormalCourse.h"
#include "SummerCourse.h"
#include "Student.h"
#include "GeneralProgramStudent.h"
#include "SpecialProgramStudent.h"

int main(){
    int numStudent;
    cout<<"enter the number student: ";
    cin>>numStudent;
    for(int i =0 ; i<numStudent; i++)
    {
        int type;
        string cd;
        int registerdCourses;
        course*ptr;
        rational gr;
        cout<<"enter the student type: ";
        cin>>type;
        if(type==0)
        {
            generalstudent obj1;
            cin>>obj1;
            cout<<"number of registerd course: ";
            cin>>registerdCourses;
            int noCourse=1;
            for(int i =0; i<registerdCourses; i++)
            {
                cout<<"course"+to_string(noCourse)<<endl;
                cout<<"    enter the code: ";
                cin>>cd;
                ptr=searchCourse(cd);
                if(obj1.registerCourse(ptr)==true)
                {
                    cout<<"    enter the grade: ";
                    cin>>gr;
                    obj1.getCoursegpa(gr);
                    noCourse++;
                }
                else
                {
                    cout<<"    ERROR"<<endl;
                    noCourse++;
                    continue;
                }
            }
            cout<<"    "<<endl;
            cout<<"____"<<endl;
            cout<<obj1;
            obj1.printRegistered();
            cout<<"OVERALL GPA: "<<obj1.gettotalGPA()<<endl;
            cout<<"STUDENT EXPENSE: "<<obj1.calculateExpense()<<endl;
            cout<<"___"<<endl;
        }
        else if(type==1)
        {
            specialStudent obj2;
            cin>>obj2;
            cout<<"number of registerd course: ";
            cin>>registerdCourses;
            int noCourse=1;
            for(int i =0; i<registerdCourses; i++)
            {
                cout<<"course"+to_string(noCourse)<<endl;
                cout<<"    enter the code: ";
                cin>>cd;
                ptr=searchCourse(cd);
                if(obj2.registerCourse(ptr)==true)
                {
                    cout<<"    enter the grade: ";
                    cin>>gr;
                    obj2.getCoursegpa(gr);
                    noCourse++;
                }
                else
                {
                    cout<<"    ERROR"<<endl;
                    noCourse++;
                    continue;
                }
            }
            cout<<"    "<<endl;
            cout<<"____"<<endl;
            cout<<obj2;
            obj2.printRegistered();
            cout<<"OVERALL GPA: "<<obj2.gettotalGPA()<<endl;
            cout<<"STUDENT EXPENSE: "<<obj2.calculateExpense()<<endl;
            cout<<"____"<<endl;
        }
    }
    return 0;
}
