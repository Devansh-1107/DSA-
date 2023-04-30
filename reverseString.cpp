// reverse string 
#include<iostream>
using namespace std;
int size(char ch[])
{
    int count=0;
    for(int i=0; ch[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
void reverseString(char ch[])
{
    int s=0;
    int e=size(ch)-1;
    while(s<=e)
    {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
    cout<<"The reversed string is "<<ch;
}
int main ()
{
    char ch[100];
    cout<<"Enter the string to be reversed--";
    cin>>ch;
    reverseString(ch);
    return 0;
}
