#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<"  ";
    }
}

void bubbleSort(int arr[],int n)
{
    for(int i=1;i<n-1;i++)
    {
        bool swapped = false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swapped = true;
                swap(arr[j+1],arr[j]);
            }
        } 
       if (swapped == false)
       {
        break;
       }
    }
}

int main()
{
    int arr[6]={5,3,2,1,6,7};
    int size=6;
    bubbleSort(arr,size);
    print(arr,size);
}