#include<iostream>
#include<vector>
using namespace std;
int arraySize(char ch[])
{
    int count=0;
    for(int i=0;ch[i];i++)
    {
        count++;
    }
    return count;
}
bool checkPalindrome(char ch[])
{
    int s=0;
    int e=arraySize(ch)-1;
    int flag=1;
    while(s<=e)
    {
        if(ch[s]!=ch[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return flag;
}
int main ()
{
    char ch[100];
    cout<<"Enter to check palindrome or not"<<endl;
    cin>>ch;
    if(checkPalindrome(ch))
    {
        cout<<"yes it is a palindrome "<<endl;
    }
    else{
        cout <<"no it is not a palindrome "<<endl;
    }
    return 0;
}