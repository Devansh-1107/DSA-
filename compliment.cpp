// compliment of base 10 integer leet code
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int bitWiseCompliment(int n)
{
    int m = n, ans;
    int mask = 0;
    if (n == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    ans = (~n) & mask;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << bitWiseCompliment(n);
    return 0;
}