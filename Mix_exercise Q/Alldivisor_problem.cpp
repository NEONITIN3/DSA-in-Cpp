#include<bits/stdc++.h>
using namespace std;
//printing all devisor for a number;
//i/p=15;
//o/p= 1,3,5,15;
// naive solution 


// 11111111111111111111111111
/* 
int main(){
  int n=15;
 
  for(int i=1;i<=n;i++)if(n%i==0)
 cout<<i<<" ";
}
but with this way we take O(n) time we need to optimised it
*/



//2222222222222222222222222222222222222222222
//optimize solution but not sorted manner 

/*
int main(){
  int n=15;
  for(int i=1;i*i<n;i++){
    if(n%i==0){ //jab n%i ==0 hoga tabhi loop m jayeg  i;
     cout<<i<<" ";
       if(i!=n/i)
        cout<<n/i<<" ";
    }
    
    //but ye sorted m print nahi karega
  } 
}
*/

//33333333333333333333333333333333333333333333333333333333333
//optimize solution with sorted manner 
int main(){
  int n=15;
  int i;
  for(i=1;i*i<=n;i++){
    if(n%i==0) //
     cout<<i<<" ";// 1 to rotN tak ka sabhi devisor 
  }
     
  for(;i>=1;i--)
     if(n%i==0)
     cout<<n/i<<" "; // rootN se N tak k sabhi ko print karega
    
  
    
}
