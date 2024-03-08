#include<iostream>
using namespace std;
class student
{
    int a;
    
    public:
    static int c;
    student()
    {
        a=c;  
    }
    static int getData()
    {
        return c;

        // static functions can only acess the static data members of the class.These functions also belongs to the class.i.e we can directly call them without having object.
    }
    void display()
    {
        cout<<a<<endl;
    }
};
int student::c=90;
int main()
{
    // int getDa=student::getData();
    // cout<<getDa;

        //OR

    student s1;
    cout<<s1.getData();
}
