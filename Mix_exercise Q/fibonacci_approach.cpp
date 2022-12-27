#include<bits/stdc++.h>
using namespace std;
//f(3)=2,0 1 2 3 5 8........

//recursive



//there is recursive solution for that
//but its take O(n^2) time 
//Space Complexity - O(N) given the function call stack size

int fib_with_recursive(int n)
{
if(n==0||n==1)
return n;
return fib_with_recursive(n-1)+fib_with_recursive(n-2);
}

//Imperative Approach (Bottom Up DP)
/*
With Imperative approach, we step through the loop and optimize the space by storing only two previous fibonacci values in two variables.
Time Complexity - O(N)
Space Complexity - O(1)
*/
int fib_with_dp(int n){
    if(n<2)
    return n;
    int a=0,b=1,c=0;
    for(int i=2;i<=n;i++){
     
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

//but here another approach which take 0(1) space also 0(1)
 
 /*
Solution 3 - Binet's Nth-term Formula
Using Binet's Formula for the Nth Fibonacci involves the usage of our golden section number Phi.
Phi = ( sqrt(5) + 1 ) / 2
Using approximation equation is good enough here, since we know N >= 0 && N <= 30, we can safely use the following rounded function
Fib(N) = round( ( Phi^N ) / sqrt(5) )
Full mathematical explanation of Binet's Formula here
Time Complexity - O(1)
Space Complexity - O(1)

*/
int fib(int N) {
        double phi = (sqrt(5) + 1) / 2;     
        return round(pow(phi, N) / sqrt(5));
    }

int main()
{
    cout<<fib(30);
return 0;

}