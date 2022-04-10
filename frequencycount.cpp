#include<bits/stdc++.h>
const int N= 1e7+10;
int hash[N];
int main()
{
    int n,arr[N];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        hash[arr[i]]++;//same time we count the frequency
    }
    for(int i=0;i<n;++i)
    {
        if(hash[i]>1)
        cout<<arr[i];
        break;
    }
}