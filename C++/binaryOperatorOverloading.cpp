#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
    complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    complex operator+(complex x)
    {
        complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
    void display()
    {
        cout<<real<<"    "<<img;
    }
};
int main()
{
    complex c1(10,20);
    complex c2(10,20);
    complex c3;
    c3=c1+c2;
    c3.display();
}