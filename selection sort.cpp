#include <iostream>
using namespace std;
void printArr(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << endl;
    }
}
void selectionSort(int ar[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (ar[minIndex] > ar[j])
            {
                minIndex = j;
            }
        }
        swap(ar[i], ar[minIndex]);
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
    selectionSort(ar, n);
    return 0;
}