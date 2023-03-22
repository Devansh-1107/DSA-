{\rtf1\ansi\ansicpg1252\cocoartf2708
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 //Decimal to Binary Approach (1)\
#include <iostream>\
#include <math.h>\
using namespace std;\
int main() \{\
    int n,res=0,rem,i=0;\
    cin>>n;\
    /*\
    not working for even numbers as 0 is getting missed\
    while (n>0)\
    \{\
        rem=n%2;\
        res=res*10+rem;\
        n/=2;\
    \}\
    while(res>0)\
    \{\
        rem=res%10;\
        fr=fr*10+rem;\
        res/=10;\
    \}\
    cout<<fr;\
    */\
while (n>0)\
    \{\
        rem=n%2;\
        n/=2;\
        res=(rem*pow(10,i))+res;\
        i++;\
    \}}