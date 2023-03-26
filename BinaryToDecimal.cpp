// binary to decimal
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, rem, res = 0, i = 0;
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        res = rem * pow(2, i) + res;
        n /= 10;
        i++;
    }
    cout << res;
    return 0;
}