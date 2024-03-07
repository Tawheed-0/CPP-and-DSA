#include<iostream>
using namespace std;
class base
{
    public:
    void fun()
    {
        cout<<"I am base class fun";
    }
};
class derived:public base
{
    public:
    void fun()
    {
        cout<<"I am derived class fun";
    }
};
int main()
{
    derived d;
    d.fun();
    // d.base::fun();           This syntax is used to call the base class function.
}

// Derived class's fun will be executed as it gives preference to the local fun first this phenomena of having same prototype to two functions within different classes inheriting from one another is known as function overriding