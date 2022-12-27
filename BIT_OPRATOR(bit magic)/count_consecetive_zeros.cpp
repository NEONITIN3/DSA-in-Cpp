#include<bits/stdc++.h>
using namespace std;
int main(){
    //Count the consecutive zero bits (trailing) on the right by casting to a float
unsigned int v;            // find the number of trailing zeros in v
int r;                     // the result goes here
v=8;//1000    0/p=3
float f = (float)(v & -v); // cast the least significant bit in v to a float
r = (*(uint32_t *)&f >> 23) - 0x7f;
cout<<r;
}