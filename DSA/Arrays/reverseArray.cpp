#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<"  ";
    }
}

void reverse(int arr[],int size)
{
    int s = 0;
    int e = size-1;
    while(s<e)     	
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    reverse(arr,size);
    print(arr,size);
}