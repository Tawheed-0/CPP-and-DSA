#include<iostream>
using namespace std;
class demo{
    int *ptr;
    public:
    demo(){
        ptr=new int[10];
        cout<<"constructor called"<<endl;
    }
    ~demo(){
        delete []ptr;
        cout<<"destructor called";
    }
};
int main()
{
    // demo d;


    //  if object is created on stack destructor will be automatically once the functions is executed but if u make an object on heap you have to explicilitly write the delete keyword once you don't need that object anymore like shown below.


    demo *d=new demo();
    delete d;
}

// ->destructors are simply used to release the resources acquired by the object of the class to prevent memory leak .
// ->There can't be more than 1 destructor in a class.
// ->destructor cannot return anything.
// ->A destructor can be virtual also.
// ->Inside the destructor u have to release all the memory if taken inside the class.