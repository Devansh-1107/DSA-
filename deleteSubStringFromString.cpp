#include<iostream>
#include<cstring>
using namespace std;
class solution
{
    public:
    string removePart(string s,string part)
    {
        while(s.length()!=0 && s.find(part)<s.length())
        {
            s.erase(s.find(part),part.legth());
        }
    }
    return s;
};