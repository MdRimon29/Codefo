#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int l, int k)
{
    for(int i=0; i<l; i++)
    {
        if(arr[i]==k)
            return i;
    }

    return -1;
}

int main()
{
    int arr[]={2,4,5,7,11,15,15,67,93,101};
    int len=sizeof(arr)/sizeof(arr[0]);
    int key=16;
    
    int result=linearSearch(arr, len, key);

    (result==-1)
        ? cout<<"Element doesnot found"
        : cout<<"Element found at position "<<result<<endl;

    return 0;    
}
/*
time complexity 1-best case=0[1]
                2-worst case=0[n]
space/auxiliary complexity=0(1)

1-define array
2-find out array length
3-check each element from index 0 to the last element so that the element is found or not
*/