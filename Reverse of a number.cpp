// reverse of a number leet code
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int main()
{
    int n, r, res = 0;
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        n /= 10;
        if ((res < (INT_MIN / 10)) || (res > (INT_MAX / 10)))
        {
            cout << "out of integer range";
        }
        else
        {
            res = res * 10 + r;
        }
    }
    cout << res;
    return 0;
}