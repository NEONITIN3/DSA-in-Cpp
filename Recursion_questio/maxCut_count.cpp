#include<bits/stdc++.h>
using namespace std;
//finding max cut for particular length n , cut is a,b,c;
//n=23,a=11,b=9,c=12
//so here we can cut first a then c (11+12=23) ,2 cut 
//or we can say 12 c cut first then a (12+11=23) here also 2 cut max 
// so output is 2 (max cut)
int maxcut(int n,int a,int b,int c ){
if(n==0) return 0;
if(n<0) return -1 ;//base condition ,jab ghatate ghatate <0 aaye to samamj lega ab nahi ghatana hai

int cut =max(maxcut(n-a,a,b,c),maxcut(n-b,a,b,c),maxcut(n-c,a,b,c));
if(cut==-1)
return -1;
return cut+1;

}
int main()
{
int n=23,a=11,b=9,c=12;
cout<<maxcut(n,a,b,c);

}