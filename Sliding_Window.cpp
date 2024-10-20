#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int k,int n)
{
    int maximum=0;
    
    for(int i=0; i<k; i++)
    {
        maximum=maximum+arr[i];       
    }
    int sum=maximum;
    for(int i=k; i<n; i++)
    {
        sum =sum+arr[i]-arr[i-k];
        maximum=max(maximum,sum);
    }

    return maximum;
}

int main()
{
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<maxSum(arr,k,size)<<endl;
    
    return 0;
}