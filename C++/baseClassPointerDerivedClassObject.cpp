#include<iostream>
using namespace std;
class base
{
    public:
void fun1(){
    cout<<"Base class fun";
}
};
class derived:public base
{
    public:
void fun2(){
    cout<<"derived class fun";
}
};
int main()
{
    base *ptr=new derived();    //Allowed but its vice-versa isn't.
    ptr->fun1();
    // ptr->fun2();             It can only acess the base class members since pointer is of base class.
}