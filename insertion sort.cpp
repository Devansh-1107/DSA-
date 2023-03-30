#include <iostream>
using namespace std;
void printArr(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << endl;
    }
}
void insertionSort(int ar[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=ar[i];
        int j=i-1;
        while(j>=0)
        {
            if(ar[j]> temp)
            {
                ar[j+1]=ar[j];
            }
            else
            {
                break;
            }
            j--;
        } 
        ar[j+1]=temp;   
    }
    printArr(ar,n);
}
int main()
{
    int n, ar[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    insertionSort(ar, n);
    return 0;
}
