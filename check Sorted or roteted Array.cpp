#include<iostream>
using namespace std;
#include<vector>
bool rotatedSorted(vector<int>&num)
{
    int n= num.size();
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(num[i-1]>num[i])
        {
            count++;
        }
    }
    if(num[n-1]<num[0])
    {
        count++;
    }
    return count<=1;
}