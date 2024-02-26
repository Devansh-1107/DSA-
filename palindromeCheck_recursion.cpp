#include<iostream>
using namespace std;
bool checkPalindrome(string str, int i,int j){
    if(i>j){
        return 1;
    }
    if(str[i]!=str[j]){
        return 0;
    }else{
        i++;
        j--;
        return checkPalindrome(str,i,j);
    }
}
int main(){
    string str="ASDLDSA";
    bool flag=checkPalindrome(str,0,str.length()-1);
    if(flag){
        cout<<"Yes, it is a palindrome"<<endl;
    }
    else{
        cout<<"No, it is not a palindrome";
    }
    return 0;
}