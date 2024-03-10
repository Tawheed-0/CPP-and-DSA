#include<iostream>
using namespace std;

template <class  T>
T maximum(T x,T y)
{
    return x>y?x:y;
}
int main()
{
    char y=maximum('a','A');
   cout<< y <<endl;
   return 0;
}