#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<"  ";
    }
}

void moveZeroes(int arr[],int n)
{
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
}

int main()
{
    int arr[6]={1,0,0,4,0,6};
    int size=6;
    moveZeroes(arr,size);
    print(arr,size);
}