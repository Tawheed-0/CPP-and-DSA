#include<iostream>
using namespace std;
class rectangle
{
    int len;
    int bread;
    public:
    rectangle(int l=0,int b=0)
    {
        len=l;
        bread=b;
    }
    int area();
};
int rectangle::area()           //This operator is used to define the function outside the class
{
    return len*bread;
}
int main()
{
    rectangle r(10,20);
    cout<<r.area();
}