#include<bits/stdc++.h>
using namespace std;
/*
n people and every Kth people will kill every round
index start with 0;
*/
int index(int n,int k){
    if(n==1)
    return 0; //jab kewal ek hi log hai to wo 0 index pe hi hoga wahi bacha rahega
     
     return (index(n-1,k)+k)%n; //kyoki har bar particular index bhi to gayab hoga
     //usko bhi handel karna hai thats why 
}
int main(){
int n=7,k=3; //o/p 3 3 hi aisa index hai jo last tak bacha arhega
cout<<"servival index after all round "<<index(n,k);
}
//agar index 0 ke bazay 1 se start ho to last m ans k +1 kar do bas
