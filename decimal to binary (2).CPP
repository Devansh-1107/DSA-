// Decimal to Binary Approach (2)
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, res = 0, bit, i = 0;
    cin >> n;
    while (n != 0)
    {
        bit = n & 1;
        n = n >> 1;
        res = (pow(10, i) * bit) + res;
        i++;
    }

    cout << res;
    return 0;
}
