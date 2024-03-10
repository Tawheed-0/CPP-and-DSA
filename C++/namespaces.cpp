#include<iostream>
using namespace std;

// Namepaces are used to remove name conflicts/ambiguity. if we write multiple functions with same name not overloaded ,or even clasess with same name to remove confusions we wrap them inside namespaces like shown below

namespace first
{
    void fun()
    {
        cout<<"I am first"<<endl;
    }
}
namespace second
{
    void fun()
    {
        cout<<"I am second";
    }
}

using namespace first;
int main()
{
    // fun();      //if we write directly like that it will get confused and will show error to overcome that 

    // first::fun();   but writing like this we will not get any errors
    // second::fun();

    // By writing this using namespace first; we can set default function to be called as well
    fun();  //first will be called now
}