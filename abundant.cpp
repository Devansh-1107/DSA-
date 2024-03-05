#include<iostream>
#include<math.h>
using namespace std;
int sumOfFactor(int n){
    int sum=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            sum+=i;
            sum+=(n/i);
        }
    }
    return sum;
}
bool isabundant(int n){
    return sumOfFactor(n)>n;
}
int  main(){
    int n;
    cin>>n;
    bool flag= isabundant(n);
    if(flag)
        cout<<"the number is abundant "<<endl;
    else
        cout<<"The number is  not abundant"<<endl;
    return 0;
}