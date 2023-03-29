#include<iostream>
using namespace std;
int binarySearch(vector<int>& arr,int start,int end,int key)
{
    int s=start;
    int e=end;
    int mid=(s+e)/2;      // mid= s+((e-s)/2)   this should be used as e+s may exceed the integer range
    while(e>=s)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
}
int pivotElement(vector<int>& arr,int n)
{
    int s=0;
    int e=n-1;
    int mid=((e-s)/2)+s;
    while(s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e= mid;
        }
        mid=((e-s)/2)+s;
    }
    return s;
}
int findPosition(vector<int>& arr, int n, int k)
{
    int ans;
    int pivot=pivotElement(arr,n);
    if((arr[pivot]<=k)&&(k<=arr[n-1]))
    {
        ans=binarySearch(arr,pivot,(n-1),k);
    }
    else
    {
        ans=binarySearch(arr,0,(pivot-1),k);        
    }
    return ans;
}
