#include <iostream>
using namespace std;
#include <vector>
vector<int> reverse(vector<int> &v)
{
    int s=0;
    int e=v.size()-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
vector<int> sumArr(vector<int> &a, int m, vector<int> &b, int n)
{
    int i = m - 1;
    int j = n - 1;
    int carry = 0;
    vector<int> ans;
    while (i >= 0 && j >= 0)
    {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while ((i < 0) && (j >= 0))
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while ((i >= 0) && (j < 0))
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    if (carry!=0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverse(ans);
}
int main()
{
    int m, n, input;
    cin >> m >> n;
    vector<int> a, b, sum;
    for (int i = 0; i < m; i++)
    {
        cin >> input;
        a.push_back(input);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        b.push_back(input);
    }
    sum = sumArr(a, m, b, n);
    for (int i = 0; i < sum.size(); i++)
    {
        cout << sum[i] << endl;
    }
    return 0;
}