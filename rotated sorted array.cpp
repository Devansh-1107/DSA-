// Rotate the given array after k th index
#include<iostream>
#include<vector>
using namespace std;
class rotatedSortedArr
{
    public:
    void rotated(vector <int>& v, int k)
    {
        vector <int> temp(v.size());
        for (int i=0;i< v.size();i++)
        {
            temp[(k+i)%v.size()]= v[i];
        }
    }
};

