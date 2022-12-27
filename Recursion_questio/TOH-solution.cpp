#include<bits/stdc++.h>
using namespace std;
//printing step involve in tower of hanoi with recursion;

void TOH(int n,char A,char C,char B){

  if(n==0)//base case
 { return ;}
 TOH(n-1,A,B,C);
  cout<<n<<" move from "<< A <<" to " <<C<<endl;
  TOH(n-1,B,C,A);

}
int main()
{
 int n=3;//no of disk

 /*
 |    |     |
 |    |     |
 -    -     -
 A   B      C    //we need to move from A to C help of B tower

 sabse upar wale disk ko 1 aur sabse niche walwe ko N kahenge
    -    1
   ---   2
  -----   3

 */
 TOH(n,'A','C','B') ;
 return 0;
  }
