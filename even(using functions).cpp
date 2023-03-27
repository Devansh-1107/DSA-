#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
bool oddeven(int n)
{
    if ((n & 1) == 1)
    {
        cout << "odd" << endl;
    }
    else
    {
        cout << "even" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    oddeven(n);
}