#include<iostream>
using namespace std;
class student
{
    long long rollNo;
    int year;
    string name;
    public:
    student()
    {
        rollNo=0;
        year=0;
        name="";
    }
    friend istream & operator>>(istream &in,student &s1);
};
istream & operator>>(istream &in,student &s1)
{
    cout<<"Enter your Roll Number"<<endl;
    in>>s1.rollNo;
    cout<<"Enter your Year"<<endl;
    in>>s1.year;
    cout<<"Enter your Name"<<endl;
    in>>s1.name;
    return in;
}
int main()
{
    student s1;
    cin>>s1;
}