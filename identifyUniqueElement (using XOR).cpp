//In input we will have all elements two times except one element we have to find that element(CODESTUDIO)
#include<iostream>
using namespace std;
int uniqueElement(int a[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    return ans;
}
int main()
{
    int a[100],n;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the required element is "<<uniqueElement(a,n);
    return 0;
}