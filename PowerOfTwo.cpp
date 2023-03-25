{\rtf1\ansi\ansicpg1252\cocoartf2708
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 // compliment of base 10 integer leet code\
#include <iostream>\
#include<math.h>\
#include <climits>\
using namespace std;\
int powerOfTwo(int n)\
\{\
    int ans;\
    for(int i=0;i<=30;i++)\
    \{\
        ans=pow(2,i);\
        if(ans==n)\
        \{\
            return true;\
        \}\
    \}\
    return false;\
\}\
int main() \{\
    int n;\
    cin>>n;\
    cout<<powerOfTwo(n);\
    return 0;\
\}\
\
\
\
\
\
*/int powerOfTwo(int n)\
\{\
    int ans=1;\
    for(int i=1;i<=30;i++)\
    \{\
        if(ans==n)\
        \{\
            return true;\
        \}\
        if (ans<(INT_MAX/2))\
        \{\
            ans=ans*2;\
        \}\
    \}\
    return false;\
\}/*}