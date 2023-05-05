//2D array introduction
#include<iostream>
using namespace std;
int main()
{
    int arr[3][4];
    //for initialising rowwise
    //arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // taking input in 2-D array row-wise
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
     // taking input in 2-D array column-wise
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cin>>arr[j][i];
    //     }
    // }

    // printing the array
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}   
