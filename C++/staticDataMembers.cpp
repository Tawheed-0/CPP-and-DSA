#include<iostream>
using namespace std;
class student
{
    int a;
    // int b;
    public:
    static int c;
    student()
    {
        a=c;
        // b=88;
        display();
    }
    void display()
    {
        cout<<a<<endl;
    }
};
int student::c=90;
int main()
{
    student s1;
    student s2;
    s1.c=32;
    student s3;
    student::c=3003;      //imp
    student s4;
    student s5;
}

// static data members are those members which occupy space only once that is they are created only once and all the objects of that class share that member . They are the part of the class not the object they can be accessed through objects as well as class name. They have to be initialized ouside of the class. 