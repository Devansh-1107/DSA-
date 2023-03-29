#include<iostream>
using namespace std;
int SrootInt(long long int n)
{
    int s=0;
    int e=n-1;
    int mid=s+((e-s)/2);
    int ans;
    while(s<=e)
    {
        long long int square= mid*mid;
        if(square==n)
        {
            return mid;
        }
        else if (square<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}
double morePrecision(int n,int precision, int temp)
{
    double factor=1;
    double ans=temp;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        for (double j=ans;j*j<n;j+=factor)
        {
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int temp=SrootInt(n);
    cout<<"the desired output is "<<morePrecision(n,3,temp);
    return 0;
}
