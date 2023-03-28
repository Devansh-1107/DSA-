#include<iostream>
using namespace std;
int peakIndexInMountainArr(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid=((e-s)/2)+s;
    while(s<e)
    {
        if (a[mid]<a[mid]+1)
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
int main()
{
    int n, a[100], key;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<" the peak element is "<<peakIndexInMountainArr(a,n)<<endl;
    return 0;
}
