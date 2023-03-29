{\rtf1\ansi\ansicpg1252\cocoartf1671\cocoasubrtf600
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <bits/stdc++.h>\
using namespace std;\
const int n=4;\
int partition(int a[], int l, int h)\{\
    int pivot=a[h];\
    int i=l-1;\
    for (int j = l; j <= h-1; j++) \{\
        if(a[j]>=pivot)swap(a[++i], a[j]);\
    \}\
    swap(a[i+1],a[h]);\
    return i+1;\
    \
\}\
void quicks(int a[], int l, int h)\{\
    if(l<h)\{\
        int pi=partition(a, l, h);\
        quicks(a, l, pi-1);\
        quicks(a,pi+1, h);\
    \}\
\}\
int main() \{\
	int a[n];\
	for (int i = 0; i < n; i++) \{\
	    cin>>a[i];\
	\}\
	quicks(a, 0,n-1);\
	for (int i = 0; i < n; i++) \{\
	    cout<<a[i]<<endl;\
	\}\
	return 0;\
\}\
}