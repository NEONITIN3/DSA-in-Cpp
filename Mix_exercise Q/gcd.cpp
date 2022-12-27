#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
  int result= min(a,b) ;
  while(result!=0){
      if(a%result==0 && b%result==0)
      {
          break;
      }
      else
      {result--;}
  }
  return result;
}
int main()
{
    cout<<gcd(30,45);
}
