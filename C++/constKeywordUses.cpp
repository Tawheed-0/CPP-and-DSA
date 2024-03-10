#include<iostream>
using namespace std;
int main()
{
    // const int a=10;
    // a++;        // This is not allowed i.e we cannot modify the constant variables .
    // cout<<a;



    // Then we have const pointer as well
    // int a=10;
    // int const *ptr=&a;
   // ++*ptr;     //not permited  // by adding const above, the data inside the variable its pointing gets locked and cannot be modified but the pointer can be made point to any other variable.As shown below.
    
    
    // int y=78;
    // ptr=&y;
    // cout<<*ptr;

    // Then if we add const between the * and the pointer variable name i.e int * const ptr. Now using this syntax the data to which it is pointin  is not locked rather we cannot make this pointer variable point any other variable but we can modify the data inside the variable. as shown below.


    // int a=10;
    // int * const ptr=&a;
    // int y=78;
    // // ptr=&y;     //not permitted.
    // ++*ptr;       //permitted.
    // cout<<a;


    //Then we have another variation of using const i.e by adding in the beginning and but the * and the pointer variable name making the data and the variable its pointing locked i.e we can neither modify the data nor can we make that pointer point to any other variable e.g shown below.

    // int a=10;
    // const int * const ptr=&a;
    // int y=78;
    // ptr=&y;     //not permitted.
    // ++*ptr;       // not permitted.
    // cout<<a;

}