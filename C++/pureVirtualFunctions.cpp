#include<iostream>
using namespace std;
class base
{
    public:
    virtual void fun()=0;
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

// Pure virtual functions  must get overrided and you cannot create the object of the class having pure virtual functions but you can have the pointer of that class and object of the class which was inherited from it but that class must overide the pure virtual function.