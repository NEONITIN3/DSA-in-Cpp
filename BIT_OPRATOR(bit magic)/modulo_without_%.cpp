#include<bits/stdc++.h>
using namespace std;

//Compute modulus division by 1 << s without a division operator
//Most programmers learn this trick early, but it was included for the sake of completeness.
int main(){
const unsigned int n;          // numerator
const unsigned int s;
s=8;
const unsigned int d = 1U << s; // So d will be one of: 1, 2, 4, 8, 16, 32, ...
unsigned int m;                // m will be n % d

n=7;
m = n & (d - 1); 
cout<<m;
}