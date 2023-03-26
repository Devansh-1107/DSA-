// Decimal to Binary Approach (1)
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, res = 0, rem, i = 0;
    cin >> n;
    /*
    not working for even numbers as 0 is getting missed
    while (n>0)
    {
        rem=n%2;
        res=res*10+rem;
        n/=2;
    }
    while(res>0)
    {
        rem=res%10;
        fr=fr*10+rem;
        res/=10;
    }
    cout<<fr;
    */
    while (n > 0)
    {
        rem = n % 2;
        n /= 2;
        res = (rem * pow(10, i)) + res;
        i++;
    }
    cout<<res;
}