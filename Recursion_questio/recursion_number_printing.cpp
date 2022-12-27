#include<bits/stdc++.h>
using namespace std;
//printing increasing and decresing array with recursion;
//in 6
//op 6 5 4 3 2 1 1 2 3 4 5 6;
void solve(int n){
  if(n==0)//base case
  return;

  cout<<n<<" ";
  solve(n-1);
  cout<<n<<" ";

}
int main()
{
  int n;
  cin>>n;
  solve( n) ;
  }
