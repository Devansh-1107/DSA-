#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    if(n==0|| n==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        return isSorted(arr+1,n-1);
    }
}
int main(){
    int arr[5]={3,5,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    bool ans=isSorted(arr,size);
    if(ans){
        cout<<"The array is sorted"<<endl;
    }
    else{
        cout<<"the array is not sorted"<<endl;
    }
    return 0;
}