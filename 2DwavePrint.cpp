#include<iostream>
#include<vector>

using namespace std;

vector<int> wavePrint(vector<vector<int>> arr,int nrows,inr ncols)
{
    vector<int> ans;
    for(int j=0; int j<ncols;j++)
    {
        if(j&1)
        {
            //odd
            for(int i=nrows-1;i>=0;i--)
            {
                ans.push_back(arr[i][j]);
            }
        }
        else
        {
            //even
            for(int i=0;i<=nrows;i--)
            {
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}
