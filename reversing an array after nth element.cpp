// reversing element after nth element
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
vector<int> reverseArr(vector<int> a,int n)
{
    int s=n+1;
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
    int m,s,n;
    cout<<"enter the size of vector/array"<<endl;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>s;
        a.push_back(s);
    }
    cout<<"enter the index after which the array is to be reversed"<<endl;
    cin>>n;
    vector<int> ans= reverseArr(a,n);
    print(ans);
    return 0;
}
