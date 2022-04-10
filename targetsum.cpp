
#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int arr[100],target,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    cin >>target;
   for (int i=0 ;i<n-1;i++)
   {
          for (int j=0 ;j<n;j++)
          {
              if(arr[i]+arr[j]==target)

                cout<<i<<" "<<j<<" ";
          }
   }
   return 0;

}