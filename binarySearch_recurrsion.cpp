#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e, int key){
    if(s>e){
        return 0;
    }
    int mid=s+(e-s)/2;
    if(key==arr[mid]){
        return 1;
    }
    if(arr[mid]>key){
        return binarySearch(arr,s,mid-1,key);
    }else if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    
}

int main(){
    int arr[]={2,3,4,5,6,7,8};
    int size=7,key;
    cin>>key; 
    bool flag=binarySearch(arr,0,size-1,key);
    if(flag){
        cout<<"The element is available"<<endl;
    }else{
        cout<<"the element is not available"<<endl;
    }
    return 0;
}