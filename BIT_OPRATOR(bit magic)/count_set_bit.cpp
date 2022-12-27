#include<bits/stdc++.h>
using namespace std;
//count the set bit in given intger binary reprasentation
//5-101 so o/p 2
//7-111 o/p 3;
int main(){
int n=7;
int c=0;
// while(n>0)
// {
//     if(n&1==1){  //agar last wala 1 hai to c++ kar do
//         c=c+1;
//         n=n>>1; //n ko kam karna hai to 1 digit right shift kar do

//     }
// }
// cout<<c;


// Counting bits set, Brian Kernighan's way
// unsigned int v; // count the number of bits set in v
// unsigned int c; // c accumulates the total bits set in v
for (c = 0; n; c++)
{
  n &= n - 1; // clear the least significant bit set
}
// Brian Kernighan's method goes through as many iterations as there are set bits. So if we have a 32-bit word with only the high bit set, then it will only go once through the loop.
// Published in 1988, the C Programming Language 2nd Ed. (by Brian W. Kernighan and Dennis M. Ritchie) mentions this in exercise 2-9. On April 19, 2006 Don Knuth pointed out to me that this method "was first published by Peter Wegner in CACM 3 (1960), 322. (Also discovered independently by Derrick Lehmer and published in 1964 in a book edited by Beckenbach.)"

cout<<c;

}



