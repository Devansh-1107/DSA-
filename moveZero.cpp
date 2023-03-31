#include<iostream>
using namespace std;
void printArr(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
}
void swapZero(int a[],int n)
{
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]!=0)
        {
            swap(a[i],a[j]);
            i++;
        }
    }
}
int main()
{
    int a[6]={1,0,0,7,8,0};
    int b[6]={0,0,3,0,5,7};
    swapZero(a,6);
    swapZero(b,6);
    printArr(a,6);
    cout<<endl;
    printArr(b,6);
    return 0;
}