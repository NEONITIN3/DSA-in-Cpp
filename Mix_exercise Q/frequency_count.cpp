#include<bits/stdc++.h>
using namespace std;
const int N= 1e+10;
int hasha[N];

int main(){
    int a[N],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        hasha[a[i]]++;
    }
    for(i :n){
        cout<<hasha[i]<<" ";
    }
}

