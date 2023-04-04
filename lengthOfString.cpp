#include<iostream>
using namespace std;
int getSize(char ch[])
{
    int count =0;
    for (int i=0; ch[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[100];
    cout<<"enter the string of which the size is to be calculated";
    cin>> ch;
    cout<<" The size of the string is "<<getSize(ch);
    return 0;
}