{\rtf1\ansi\ansicpg1252\cocoartf2708
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 // reverse of a number leet code\
#include <iostream>\
#include<math.h>\
#include <climits>\
using namespace std;\
int main() \{\
    int n, r, res=0;\
    cin>>n;\
    while(n!=0)\
    \{\
        r=n%10;\
        n/=10;\
        if((res< (INT_MIN/10))||(res>(INT_MAX/10)))\
        \{\
            cout<<"out of integer range";\
        \}\
        else\
        \{\
            res=res*10+r;\
        \}\
    \}\
    cout<<res;\
    return 0;\
\}}