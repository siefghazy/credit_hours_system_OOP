#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED

class rational
{
    int denominator;
    int numerator;
public:
    rational()
    {
        numerator=0;
        denominator=1;
    }
    rational(int n, int d)
    {
        numerator = n;
        denominator = d;
    }
    int getNumerator()
    {
        return numerator;
    }
    int getDenominator()
    {
        return denominator;
    }
    rational operator+(const rational&obj)
    {
        rational temp;
        temp.numerator=(numerator*obj.denominator)+(obj.numerator*denominator);
        temp.denominator=denominator*obj.denominator;
        return temp;
    }
    rational operator-(const rational&obj)
    {
        rational temp;
        temp.numerator=(numerator*obj.denominator)+(obj.numerator*denominator);
        temp.denominator=denominator*obj.denominator;
        return temp;
    }
    rational operator*(const rational&obj)
    {
        rational temp;
        temp.numerator=numerator*obj.numerator;
        temp.denominator=denominator*obj.denominator;
        return temp;
    }
    rational operator/(const rational&obj)
    {
        rational temp;
        temp.numerator=numerator*obj.denominator;
        temp.denominator=denominator*obj.numerator;
        return temp;
    }
    bool operator==( rational&obj)
    {
        bool temp;
        if(doubleValue()==obj.doubleValue())
        {
            temp=true;
        }
        else
        {
            temp=false;
        }
        return temp;
    }
    int operator<=( rational&obj)
    {
        double simp1,simp2;
        simp1=doubleValue();
        simp2=obj.doubleValue();
        if(simp1<simp2)
        {
            return -1;
        }
        else if(simp1>simp2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int intValue()
    {
        int val;
        val=numerator/denominator;
        return val;
    }
    double doubleValue()
    {
        double val;
        val=(numerator*0.1*10)/denominator;
        return val;
    }
    string toString()
    {
        return to_string(numerator)+"/"+to_string(denominator);
    }
    int gcd(int n,int d)
    {
        return __gcd(n,d);
    }
    friend ostream&operator<<(ostream&os,const rational&ra)
    {
        os<<ra.numerator;
        return os;
    }
    friend istream&operator>>(istream&is,rational&st)
    {
        is>>st.numerator;
        return is;
    }
    rational operator=(const rational&obj)
    {
        rational temp;
        numerator=obj.numerator;
        denominator=obj.denominator;
        temp.numerator=numerator;
        temp.denominator=denominator;
        return temp;
    }
};
#endif
