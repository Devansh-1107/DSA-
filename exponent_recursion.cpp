#include<iostream>
using namespace std;
int exponent(int a,int b){
    if (b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    //recursive call
    int ans=exponent(a,b/2);

    //if b is even
    if(b%2==0){
        return ans*ans;

    }else{
        return a*ans*ans;
    }

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a to the power b is "<<endl<<exponent(a,b);
    return 0;
}