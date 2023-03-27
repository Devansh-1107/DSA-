#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}
int printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}
int revArr(int a[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
    printArr(a, size);
    return 0;
}
int main()
{
    int ar[100], size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    revArr(ar, size);
    return 0;
}