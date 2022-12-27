#include<bits/stdc++.h>
using namespace std;

/*
int 7 000000000000111
shift karna hai jitna digit leading bit right m elimanated 
01011>>2
   00010 
   //leading bit right ka utna delte kar 
   k left  m utna zero lagak balance kar denge

right shift is 
x>>y=x/2^y floar value ex 4.9=4

*/
int main()
{ 
    int n=5;
    cout<<(n<<2)<<endl;
    //n&1?cout<<"odd":cout<<"even";
}
//101101<<2
// 3=11<<1=110=6
// 11<<2 1100=12
// x<<y==x*2^y0
//int 5 10
//2^10=1024*5=5120