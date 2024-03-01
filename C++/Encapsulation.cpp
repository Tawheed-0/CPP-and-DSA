#include<iostream>
using namespace std;
class rectangle
{
    private:
    int len;
    int bread;
    public:
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
        cout<<len*bread;
    }
};
int main ()
{
    rectangle r;
    r.setLen(10);
    r.setBread(21);
    r.area();
}