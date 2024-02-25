#include<iostream>
using namespace std;
int sayDigit(int n, string arr[]){
    if(n==0){
        return 0;
    }
    int lastDigit=n%10;
    n/=10;
    sayDigit(n,arr);
    cout<<arr[lastDigit]<<endl;
    return 0 ;
}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"
    };
    int n;
    cin>>n;
    sayDigit(n,arr);
    return 0;
}