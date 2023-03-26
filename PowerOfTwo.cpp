// compliment of base 10 integer leet code
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int powerOfTwo(int n)
{
    int ans;
    for (int i = 0; i <= 30; i++)
    {
        ans = pow(2, i);
        if (ans == n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    cout << powerOfTwo(n);
    return 0;
}

/*int powerOfTwo(int n)
{
    int ans=1;
    for(int i=1;i<=30;i++)
    {
        if(ans==n)
        {
            return true;
        }
        if (ans<(INT_MAX/2))
        {
            ans=ans*2;
        }
    }
    return false;
}*/