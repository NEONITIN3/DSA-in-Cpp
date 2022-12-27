#include<bits/stdc++.h>
using namespace std;
//printing power with recursion;

int power(int n,int m){

  if(m==0)//base case
  return 1;
  return n*power(n,m-1);

}
int main()
{
  int n=2,m=5; //n^m= 5^2 == 25
  //cin>>n;
 cout<<power(n,m) ;
  }
