#include<iostream>
using namespace std;
bool ls_recurr(int arr[],int n, int key){
    if(n==1 && arr[0]==key)
        return 1;
    else if(n==0){
        return 0;
    }
    else{
        if (key==arr[0]){
            return 1;
        }
        else{
            ls_recurr(arr+1,n-1,key);
        }
    }
}
int main(){
    int arr[]={3,4,5,8,2,7,6};
    int n=7,key;
    cin>>key;
    int flag=ls_recurr(arr,n,key);
    if(flag){
        cout<<"The element is present "<<endl;
    }
    else{
        cout<<"Element is not present "<<endl;
    }
    return 0;
}