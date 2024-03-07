#include<iostream>
using namespace std;
class base
{
    public:
    virtual void fun()      //by adding this virtual keyword to this function when we create base class pointer and derived class object and then when we try to call fun() instead of base class fun derived class fun() will get executed which in normal case was not the scenario.This is done to acheive abstraction and polymorphism.
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
    base *ptr=new derived();
    ptr->fun();
}