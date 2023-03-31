#include<iostream>
using namespace std;
void printArr(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;

    }
}
void mergeSortedArr(int ar1[],int n,int ar2[],int m,int ar3[])
{
    int i=0;
    int j=0;
    int k=0;
    if((i<n) &&(j<m))
    {
        if(ar1[i]<ar2[j])
        {
            ar3[k++]=ar1[i++];
        }
        else
        {
            ar3[k++]=ar2[j++];
        }
    }
    else if ((i==n) && (j<m))
    {
        ar3[k++]=ar2[j++];
    }
    else if ((j==m)&&(i<n))
    {
        ar3[k++]=ar1[i++];
    }
    printArr(ar3,8);
}
int main()
{
    int ar1[5]={3,5,7,8,9};
    int ar2[3]={2,4,6};
    int ar3[8]={0};
    mergeSortedArr(ar1,5,ar2,3,ar3);
    return 0;
}



