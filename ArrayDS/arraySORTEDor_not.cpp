#include<bits/stdc++.h>
using namespace std;
//given array is sorted in increasing order or not

bool check(int a[],int n){
    for(int i=0;i<n;i++){
    if(a[i]>a[i+1])
    return false;

    }
    return true; //1 means sorte hai
}

int main() {
 int a[]={8,10,10,12,2};
 int n=sizeof(a)/sizeof(a[0]);
 cout<<check(a,n);
 
    }