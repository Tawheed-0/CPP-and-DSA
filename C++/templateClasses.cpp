#include<iostream> 
using namespace std;
template<class t>
class stack
{
    int top;
    t s[10];
    public:
    stack()
    {
        top=-1;
    }
    void push(t a)
    {
        if(top<9)
        {
            top++;
            s[top]=a;
        }
        else{
        cout<<"stack is full";
        }
     }
    int pop();

};


template<class t>
int stack<t>::pop()
{
        if(top<0)
        {
            cout<<"Stack is empty";
            return -1;
        }
        else{
            t x=s[top];
            top--;
            return x;
        }
}


// If you are defining the functions outside the class you must have to declare template there before the function as well as you have to specify the template name after the class name before scope resolution operator e.g    template<class t>
//                 int stack<t>::pop()



int main()
{
    stack<char> s1;       //The type of we have to specify that mandatory ie(stack <char> or <int> or <float>)
    s1.push('a');
    s1.push('a');
    s1.push('a');
    s1.push('a');
    s1.push('a');
    s1.push('a');
    s1.push('a');
    s1.push('a');
    s1.push('a');
    s1.push('a');
    // s1.push(34);
    cout<<s1.pop();

}