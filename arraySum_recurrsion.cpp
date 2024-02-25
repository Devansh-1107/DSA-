#include<iostream>
using namespace std;
int sumArr(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int sum= arr[0]+sumArr(arr+1,n-1);

    return sum;
}
int main(){
    int arr[5]={2,3,5,3,3};
    int size=5;
    cout<<sumArr(arr,size);
    return 0;
}