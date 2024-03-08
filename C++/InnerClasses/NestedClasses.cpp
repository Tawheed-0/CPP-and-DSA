#include<iostream>
using namespace std;
class outer
{
    public:
    int a;
    int b;
    int static c;
    outer()
    {
        a=2;
        b=2;
    }
    class inner
    {
        public:
        int x=25;
        void show()
        {
        cout<<c<<endl;
        }
    };
    inner i;
    void fun()
    {
        i.show();
    cout<<i.x;

    }
};
int outer::c=6;
int main()
{
    outer O1;
    O1.fun();

}