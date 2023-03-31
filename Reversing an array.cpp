#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> a)
{
    cout<<"The reversed array is -"<<endl;
    for(int i=0; i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
vector<int> reverseArr(vector<int> a)
{
    int s=0;
    int e=a.size()-1;
    while(s<=e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return a;
}
int main()
{
    vector<int> a;
    int n,s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        a.push_back(s);
    }
    vector<int> ans= reverseArr(a);
    print(ans);
    return 0;
}
