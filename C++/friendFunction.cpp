#include<iostream>
using namespace std;
class teacher;
class student
{
    int a;
    int b;
    void fun(){
        cout<<a+b;
    }
    friend void frnd();
    friend teacher;
};
class teacher
{
    public:
    student s2;
    void fun(){
    s2.a=10;
    s2.b=30;
    s2.fun();
    cout<<endl;
    }
    
};
void frnd()
{
    student s1;
    s1.a=22;
    s1.b=33;
    s1.fun();
    cout<<endl;
}
int main()
{
    frnd();
    teacher *ptr=new teacher();
    ptr->fun();
}


// Friend function is a function which is used to acess the members of the class upon object even if they are private or protected by just adding friend keyword in the beginning of the prototype in the class.we can make friend classes as well.