#include<iostream>
using namespace std;
int pivotElement(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid=((e-s)/2)+s;
    while(s<e)
    {
        if (a[mid]>=a[0])
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
    cout<<" the pivot element is at index:-  "<<pivotElement(a,n)<<endl;
    return 0;
}