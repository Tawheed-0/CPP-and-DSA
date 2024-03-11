#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    int c;
    try{
        if(b==0)
        {
            throw 101;          //if it executes the below lines get not reachable and the catch block gets                  executed and if it doesn't get executed the catch block gets not reachable.
        }
        c=b/a;
        cout<<c<<endl;
    }
    catch(int e){
        cout<<"Error code "<<e<<endl;
    }
}