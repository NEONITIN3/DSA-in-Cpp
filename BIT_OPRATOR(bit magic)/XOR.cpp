#include<bits/stdc++.h>
using namespace std;
int main(){
   // cout<<(5^5);  0
    int n=888888888;
    cout<<(n^(n-1));

    for(int i=2;i<=200;i++)
    cout<<i<<"^"<<(i-1)<<" = "<<(i^(i-1))<<endl;
    int m=5;
    int c=0;

    //finding set bit in number
    while(m){
        m=m&(m-1);
        c++;
    }
    cout<<c;
}