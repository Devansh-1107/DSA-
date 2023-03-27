#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n, r;
    float nCr, num, denom;
    cin >> n >> r;
    num = factorial(r);
    denom = (factorial(r) * factorial(n - r));
    nCr = num / denom;
    cout << "nCr value is " << nCr;
    return 0;
}