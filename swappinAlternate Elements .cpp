#include<iostream>
using namespace std;
void printArr(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    } 
}
void altSwap(int a[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(a[i],a[i+1]);
        }
    }
}
int main(){
    int ar[100],size;
    cin>>size;
    for( int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    altSwap(ar,size);
    printArr(ar,size);
    return 0;
}