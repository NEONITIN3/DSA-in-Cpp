#include<bits/stdc++.h>
using namespace std;
//printing increasing array with recursion;
//in 6
//op  1 2 3 4 5 6;
void solve(int n){
  if(n<1)//base case
  return;
  solve(n-1);
  cout<<n<<" ";
  solve(n-1);
  cout<<n<<" ";
 
}
//increasing and decresing order
//5  o/p 5 4 3 2 1 1 2 3 4 5

int inde(int n){
  cout<<endl;
  if(n==0)
  return 0;
  cout<<n<<" ";
  inde(n-1);
  cout<<n<<" ";
}


int fun(int n)
{
  if(n<1)
  return 0;
  solve(n-1);
  cout<<n;
}


int main()
{
  int n=3;
  //cin>>n;
  solve( n) ;
 // inde(n);
  }
