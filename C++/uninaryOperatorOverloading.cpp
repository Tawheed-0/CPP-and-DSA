#include<iostream>
using namespace std;
class rect
{
    int l;
    int b;
    public:
    rect(int a=0,int c=0)
    {
        l=a;
        b=c;
    }
    int operator++()
    {
        return l*l;
    }
};
int main()
{
    rect r(30,40);
    int res=++r;
    cout<<res;
}