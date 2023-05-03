// number of occurances
#include <iostream>
using namespace std;
int firstOccu(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = ((e - s) / 2) + s;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = ((e - s) / 2) + s;
    }
    return ans;
}
int lastOccu(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = ((e - s) / 2) + s;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = ((e - s) / 2) + s;
    }
    return ans;
}
int main()
{
    int n, a[100], key;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> key;
    int l = lastOccu(a, n, key);
    int f = firstOccu(a, n, key);
    if(l!=(-1))
    {
        cout << " number of occurances of " << key << " are " << l - f + 1<<endl;
    }
    else
    {
        cout<<" the element is not present"<<endl;
    }
    return 0;
}
