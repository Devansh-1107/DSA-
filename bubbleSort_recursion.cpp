#include<iostream>
using namespace std;
void sortArray(int *arr,int n){
    //alrady sorted
    if(n==0 || n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);

}
int main(){
    int arr[7]={2,6,5,3,7,4,1};
    sortArray(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}