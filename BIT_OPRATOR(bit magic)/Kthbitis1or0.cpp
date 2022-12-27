#include<bits/stdc++.h>
using namespace std;
/*
n=3 k=1
3=11 yes becoz 1 bit 1 hai
n=8 k=2
8=1000 but 2 bit 0 hai to o/p NO
*/
int main(){
    int n,k;
    cin>>n>>k;
    // k-1 k sath right ya left shift kar do 
    //phir 1 k sath AND le lo pata chal jayega 
    //1 aa agya to us bit 1 hai otherwise 0 hai
    (n>>(k-1))&1?cout<<"yes that bit is 1":cout<<"NO that bit is O";
    //yAHI LEFT OPERATOR SE BHI KAR SAKATE HO
}