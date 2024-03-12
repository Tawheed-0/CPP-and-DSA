#include<iostream>
using namespace std;
class base{
    public:
    base (){
        cout<<"base constructor called"<<endl;
    }
    virtual ~base(){
        cout<<"bse destructor called";
    }
};
class derived:public base{
    public:
    derived (){
        cout<<"derived constructor called"<<endl;
    }
    ~derived(){
        cout<<"derived destructor called"<<endl;
    }
};
int main()
{
   base *ptr=new derived();
   delete ptr;

//    The destructor of the base class has to be virtual in order that while deleting the derived class destructor will be calles instead of base class to prevent memory leak.If we don't make base class destructor virtual there will be issues as only base class will be called .
}