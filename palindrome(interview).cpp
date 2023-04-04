#include<iostream>
using namespace std;
bool isValid(char ch)
{
    if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
char toLower(char ch)
{
    if((ch>='a' && ch<='z')||( ch>='0' && ch<='0'))
    {
        return ch;
    }
    else
    {
        char temp= ch +'a'-'A';
        return temp;
    }
}
bool isPalindrome(string s)
{
    string temp="";
    // check whether the entered element is valid or not
    for (int i=0;i<s.length();i++)
    {
        if(isValid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    //convert all the characters to lower case
    for(int i=0;i<temp.length();i++)
    {
        temp[i]=toLower(temp[i]);
    }
    int st=0;
    int e=temp.length()-1;
    while ( st<=e)
    {
       if(temp[st]!=temp[e]) 
       {
        return 0;
       }
       st++;
       e--;
    }
    return 1;
}
int main()
{
    string s;
    cout<<"Enter the String to be checked"<<endl;
    cin>>s;
    if(isPalindrome(s))
    {
        cout<<"Yes it is a palindrome"<<endl;
    }
    else
    {
        cout<<"No, it is not a Palindrome"<<endl;
    }
    return 0;
}