#include<iostream>
using namespace std;

int division(int a,int b) 
{
    if(b==0)
    {
        throw 101;
    }
    return b/a;
}
int main()
{
    int a=10,b=20,c;
    try{
        c=division(a,b);
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Error code "<<e<<endl;
    }
    cout<<"Bye"<<endl;
}

// Exception handling is more useful b/w the functions. Functions will either return value or throw exception and you should be ready to catch it.