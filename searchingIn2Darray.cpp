//searching in 2D array
#include<iostream>
using namespace std;
bool isPresent(int arr[][4],int row,int col,int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4],target;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"enter  the target element";
    cin>>target;
    if(isPresent(arr,3,4,target))
    {
        cout<<"The element is present ."<<endl;
    }
    else
    {
        cout<<"The element is not present"<<endl;
    }
    return 0;
}    
