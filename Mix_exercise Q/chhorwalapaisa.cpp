#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
   for(int j=0;j<=n;j=j+2)
   {
       cout<<ar[j]<<" ";
   }
}