#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
bool linearSearch(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n, ar[100], key;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cin >> key;
    int found = linearSearch(ar, n, key);
    if (found)
    {
        cout << "The element is present" << endl;
    }
    else
    {
        cout << "The element is not present" << endl;
    }
    return 0;
}