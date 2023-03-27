#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;      // mid= s+((e-s)/2)   this should be used as e+s may exceed the integer range
    while(e>=s)
    {
        if(a[mid]==key)
        {
            return mid;
        }
        else if(key>a[mid])
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
int main()
{
    int n,a[100],key;
    cin>>n>>key;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int index=binarySearch(a,n,key);
    cout<<"the key inserted is present at the index "<<index<<endl;
    return 0;
}