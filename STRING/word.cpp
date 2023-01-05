/*
if you given s1=Nitin
              s2=Nit 
              o/p= in;

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1= "Nitin",s2= "Nitiin" ;

   //jaise non duplicate xor kar k pata karte the waise ye bhi karnege
   //dono ka aps m xor kar lenge jo bachega wahi ans 
   int temp,i;
   for(i=0;i<s1.size();i++)
   temp ^= s1[i];

   for(i=0;i<s2.size();i++)
   temp ^= s2[i];
 cout<<"extra char is  " <<char(temp);
   return 0;
}