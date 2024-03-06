#include<iostream>
using namespace std;
class student
{
    long long rollNo;
    int year;
    string name;
    public:
    student(long long a,int b,string c)
    {
        rollNo=a;
        year=b;
        name=c;
    }
    friend ostream & operator<<(ostream &out,student &s1);
};
ostream & operator<<(ostream &out,student &s1)
{
    out<<s1.rollNo<<endl<<s1.year<<endl<<s1.name;
    return out;
}
int main()
{
    student s1(2207001005,2,"Tawheed");

    cout<<s1;

}