#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,23,4,21};
    //brut force method 0(N)
    int n=sizeof(a)/sizeof(a[0]); 
    //cout<<n;
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[max])
           max=i;
    }
     cout<<"index of max element -> "<<max <<" and elment is ->"<<a[max];
   return 0;

}