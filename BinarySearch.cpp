#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int l, int r, int key)
{
    while(l<=r)
    {
        int mid=l+(r-l)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
            r=mid-1;
        }
        if(arr[mid]<key)
        {
            l=mid+1;
        }
    }

    return -1;
}

int main()
{
    int arr[]={2,3,7,7,11,15,25};
    int len=sizeof(arr)/sizeof(arr[0]);
    int key=7;
    int left=0;

    int result=binarySearch(arr,left,len-1,key);
    (result==-1)
        ? cout<<"Element doesnot found"<<endl
        : cout<<"Element found at position "<<result<<endl;
}
/*
time complexity 1-best case=0[1]
                2-worst case=0[log(n)]
space/auxiliary complexity=0(1)

1-define array
2-find out array length
3-find out array mid
4-if the key is lower than array mid then work with left portion
5-if the key is bigger than array mid then work with right portion
6-step 3,4,5 repeat untill the key found
7-if the key found return index or return -1

*/