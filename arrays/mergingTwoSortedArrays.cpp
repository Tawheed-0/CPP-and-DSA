#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<"  ";
    }
}

void merge(int nums1[], int m, int nums2[], int n) 
    {
        int i=0;
        int j=0;
        int k=0;
        int nums3[m+n];
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                nums3[k]=nums1[i];
                i++;
                k++;
            }
            else
            {
              nums3[k]=nums2[j];
                j++;
                k++;  
            }
        }
        while(i<m)
        {
             nums3[k]=nums1[i];
                i++;
                k++;
        }

        while(j<n)
        {
            nums3[k]=nums2[j];
                j++;
                k++;  
        }
        print(nums3,i+j);
    }

int main()
{
    int arr1[6]={1,2,3,4,5,6};
    int arr2[6]={1,2,3,4,5,6};
    int m=6;
    int n=6;
    merge(arr1,m,arr2,n);
   
}