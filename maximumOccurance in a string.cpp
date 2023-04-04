#include<iostream>
using namespace std;
char mostOccu(string s)
{
    int a[26]={0};
    int number=0;
    char result;
    int ans;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            number= s[i] -'a';
        }
        if(s[i]>='A'&&s[i]<='Z')
        {
            number= s[i] -'A';
        }
    a[number]++;
    }
    int maxNum=-1;
    for(int i=0;i<26;i++)
    {
        if(a[i]>maxNum){
            maxNum=a[i];
            ans=i;
        }
    }
    result='a'+ans;
    return result ;
}
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<mostOccu(s)<<endl;
    return 0;
}