#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    we done with the checking that any numbert is power of 2^x or not
    now can you check is there number can power of 4^x or 8^x or 16^x 
    can represenyt  
    or not
    

    //check n&n-1 && (n%3==1) if its for 4
 //check n&n-1 && (n%7==1) if its for 4
  //check n&n-1 && (n%15==1) if its for 4
    same for 8 and 16 also
    
    */

   int n=65 ;//you need to check can it present 4,8,16 power or not
    if(((n&(n-1))&&(n%3==1))==0)
    cout<<"yes";
    else
    cout<<"NO";

}