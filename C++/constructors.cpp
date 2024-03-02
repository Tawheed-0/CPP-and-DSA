#include<iostream>
using namespace std;
class rectangle
{
    private:
    int len;
    int bread;
    int *p;
    public:
    rectangle()                             //non-parameterized constructor
    {
        len=0;
        bread=0;
    }
    rectangle(int l, int b)                //parameterized constructor
    {
        len=l;
        bread=b;
        p=new int[len];
    }
    // rectangle(rectangle *r)                //copy constructor
    // {
    //     len=r->len;
    //     bread=r->bread;
    // }

        // OR

    // rectangle(rectangle &r)                //copy constructor
    // {
    //     len=r.len;
    //     bread=r.bread;
    // }
    rectangle(rectangle &r)                //deep copy constructor
    {
        len=r.len;
        bread=r.bread;
        p=r.p;
    }
    void setLen(int l)
    {
        len=l;
    }
    void setBread(int b)
    {
        bread=b;
    }
    int getLen()
    {
        return len;
    }
    int getBread()
    {
        return bread;
    }
    void area()
    {
        // cout<<len*bread;
        for(int i=0;i<len;i++)
        {
            p[i]=i+3;
        }
        for(int i=0;i<len;i++)
        {
            cout<<p[i]<<endl;
        }
    }
};
int main()
{
    rectangle r(4,22); 
    rectangle r2(r);
    r2.area();
}


// Deep copy constructor is another concept in which we give memory separate to variables or arrays which are declared on heap . Where in simple copy constructor there is a problem of the pointer pointing to the parameter's memory locations .therefore we have a concept of deep copy constructor.