#include<bits/stdc++.h>
using namespace std;

void quickSort(int array[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int temp=0;
        for(int j=i+1; j<n; j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

int main()
{
    int array[]={64,34,25,5,22,11,90,12};
    int n=sizeof(array)/sizeof(array[0]);

    quickSort(array,n);

    cout<<"The sorted(selection sort) array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}