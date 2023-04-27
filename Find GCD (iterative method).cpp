// GCD 
#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The GCD of the given input is " << GCD(a, b);
    return 0;
}
