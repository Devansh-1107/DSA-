#include <iostream>
using namespace std;
void printArr(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << endl;
    }
}
void BubbleSort(int ar[], int n)
{
    for (int i =1 ; i < n ; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(ar[j]>ar[j+1])
            {
                swap(ar[j],ar[j+1]);
            }
        }
    }
    printArr(ar, n);
}
int main()
{
    int n, ar[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    BubbleSort(ar, n);
    return 0;
}