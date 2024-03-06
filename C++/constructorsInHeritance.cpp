#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"non-param constructor base"<<endl;
    }
    base(int a)
    {
        cout<<"param constructor base"<<endl;
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"non-param constructor derived"<<endl;
    }
    derived(int b)
    {
         cout<<"param constructor derived"<<endl;
    }
    derived (int x,int y):base (x)
    {
         cout<<"param constructor derived"<<endl;
    }
};
int main()
{
    derived d(10,20);
}