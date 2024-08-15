#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int current = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current)
        {
            arr[j+1]=arr[j];
            j--; 
        }
        arr[j+1]=current;
    }
}

void print_array(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int arr[]={8,2,4,1,3,3,5,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr,n);

    print_array(arr,n);

    return 0;
}