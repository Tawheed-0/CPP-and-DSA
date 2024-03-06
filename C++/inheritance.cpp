#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    int b;
    void show()
    {
        cout<<a<<endl<<b;
    }
};
class derived:public base
{
    public:
    int y;
    void display()
    {
        cout<<a<<endl<<b<<endl<<y;
    }
};
int main()
{
    derived d;
    d.a=10;
    d.b=9710;
    d.y=1980;
    d.show();
}