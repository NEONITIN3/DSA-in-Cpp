#include<bits/stdc++.h>
using namespace std;
//XOR K BAARE M
/*
XOR (^):
X^Y → This checks if a position has a set bit in either one of X or Y, if there is then the result also has a set bit there. Eg.
X = 1011010
Y = 0101010
------------------
X^Y = 1110000

Some Properties of XOR:

1. a^0 = a
2. a^a = 0
3. x^y = y^x (Commutativity) //CHAHE JAISE LIKH LO ANS SAME 
4. (x^y)^z = x^(y^z) (Associativity) //CHAHE BAAD M XOR KARO YAA PAHALE ANS SAME
5.X^Y^X=Y JO UNIQUE HOGA WAHI OUTPUT AA JAYEGA



*/

int main()
{
    //without third variable swapping 
    /*
    b=a+b;
    a=b-a;
    b=b-a;
*/

//bit se swapping
    int A=4,B=7;
    cout<<"before swappin "<<" A = " <<A<<" 
    B = "<<B<<endl;
    //a=b lana hai to bas xor ki 5 propertie laga denge
    // a=a^a^b right m hamesa b hi bachega;
    // bas esi ko tod k emplement kar dena hai
    B=A^B;
    A=A^B; //A^A^B
    B=A^B; //A^A^B^B
    cout<<endl;
cout<<"AFTER swappin "<<" A = " <<A<<" B = "<<B<<endl;
} 