#include<iostream>
#include<string>
using namespace std;

#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
course*searchCourse(string cod)
{
    for(int i =0 ; i<16; i++)
    {
 course* COURSES[]= {new normalcourse("Math", 1, 2),
                new normalcourse("Programming_1", 1, 3),
                new normalcourse("Technical_Writing", 1, 3),
                new normalcourse("Electronics", 2, 4),
                new normalcourse("Data_Structures", 2, 3),
                new normalcourse("OOP", 2, 3),
                new normalcourse("Algorithms", 3, 2),
                new normalcourse("Operating_Systems", 3, 3),
                new normalcourse("Databases", 3, 3),
                new normalcourse("Machine_Learning", 4, 3),
                new normalcourse("Compilers", 4, 4),
                new normalcourse("Programming_Concepts", 4, 4),
                new summerCourse("Math", 1, 2),
                new summerCourse("Compilers", 4, 4),
                new summerCourse("Algorithms", 3, 2),
                new summerCourse("OOP", 2, 3)
    };
        if(cod==COURSES[i]->getCode())
        {
            return COURSES[i];
        }
    }
}


class student
{
protected:
    int noOfcourse;
    course* courselist[6];
    string name;
    string id;
    int level;
    double gpa;
    int*grades=new int[6];
    double*Gpa=new double[6];
public:
    student()
    {
        course* arr[]={NULL};
        noOfcourse=0;
    }
    double getCoursegpa(rational ca)
    {

        grades[noOfcourse-1]=ca.getNumerator();
        if(ca.getNumerator()<60)
        {
            gpa=0.00;
            Gpa[noOfcourse-1]=gpa;
            return gpa;
        }
        else if(60<=ca.getNumerator()&&ca.getNumerator()<=62)
        {
            gpa=0.70;
            Gpa[noOfcourse-1]=gpa;
            return gpa;
        }
        else if(63<=ca.getNumerator()&&ca.getNumerator()<=66)
        {
            gpa=1.00;
            Gpa[noOfcourse-1]=gpa;
            return gpa;
        }
        else if(67<=ca.getNumerator()&&ca.getNumerator()<=69)
        {
            gpa=1.30;
            Gpa[noOfcourse-1]=gpa;
            return gpa;
        }
        else if(70<=ca.getNumerator()&&ca.getNumerator()<=72)
        {
            gpa=1.70;
            Gpa[noOfcourse-1]=1.70;
            return gpa;
        }
        else if(73<=ca.getNumerator()&&ca.getNumerator()<=76)
        {
            gpa=2.00;
            Gpa[noOfcourse-1]=gpa;
            return gpa;
        }
        else if(77<=ca.getNumerator()&&ca.getNumerator()<=79)
        {
            gpa=2.30;
            Gpa[noOfcourse-1]=gpa;
            return gpa;
        }
        else if(80<=ca.getNumerator()&&ca.getNumerator()<=82)
        {
            gpa=2.70;
            Gpa[noOfcourse-1]=gpa;
            return gpa;
        }
        else if(83<=ca.getNumerator()&&ca.getNumerator()<=86)
        {
            gpa=3.00;
            Gpa[noOfcourse-1]=gpa;
            return gpa;
        }
        else if(87<=ca.getNumerator()&&ca.getNumerator()<=89)
        {
            gpa=3.30;
            Gpa[noOfcourse-1]=gpa;
            return gpa;
        }
        else if(90<=ca.getNumerator()&&ca.getNumerator()<=92)
        {
            gpa=3.70;
            Gpa[noOfcourse-1]=gpa;
            return gpa;
        }
        else if(93<=ca.getNumerator()&&ca.getNumerator()<=97)
        {
            gpa=4.00;
            Gpa[noOfcourse-1]=gpa;
            return gpa;
        }
        else if(97<=ca.getNumerator()&&ca.getNumerator()<=100)
        {
            gpa=4.00;
            Gpa[noOfcourse-1]=gpa;
            return gpa;
        }

    }
    void printRegistered()
    {
        cout<<"        "<<endl;
        int nOcourse=1;
        for(int i =0 ; i<noOfcourse; i++)
        {
            cout<<"course"+to_string(nOcourse)<<endl;
            cout<<*(courselist[i]);
            cout<<"    Grades: "<<grades[i]<<endl;
            nOcourse++;
        }
    }
     virtual float calculateExpense()=0;
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
    double gettotalGPA()
    {
        double temp=0;
        int sumC=0;
        for(int i =0; i<noOfcourse; i++)
        {
            temp+=Gpa[i]*courselist[i]->getcreditHours();
            sumC+=courselist[i]->getcreditHours();
        }
        return temp/sumC;
    }
    ~student()
    {
        delete[]grades;
        delete[]Gpa;
    }
};

#endif // STUDENT_H_INCLUDED
