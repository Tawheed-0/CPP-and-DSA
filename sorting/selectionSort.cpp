#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<"  ";
    }
}

void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[ind])
            {
                ind=j;
            }
        } 
        swap(arr[ind],arr[i]);
    }
}

int main()
{
    int arr[6]={5,3,2,1,6,7};
    int size=6;
    selectionSort(arr,size);
    print(arr,size);
}