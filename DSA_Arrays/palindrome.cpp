#include<iostream>
using namespace std;

char toLower(char ch)
{
    if(ch>=97 && ch<=122)
    {
        return ch;
    }
    else
    {
        ch=ch+32;
    }
    return ch;
}

int main()
{
    char ch='H';
    char lowerCh=tolower(ch);
    cout<<lowerCh; 
}
