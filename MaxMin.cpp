#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int getMax(int a[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
    }
    return maxi;
}
int getMin(int a[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, a[i]);
    }
    return mini;
}
int main()
{
    int size, ar[100];
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    cout << "The maximum value is" << getMax(ar, size);
    cout << "The minimum value is" << getMin(ar, size);
}