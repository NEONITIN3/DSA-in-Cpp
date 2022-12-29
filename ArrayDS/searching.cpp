#include<bits/stdc++.h>
using namespace std;
int search(int a[],int target,int n){
    //int n=sizeof(a)/sizeof(a[0]);
    //size dekhe alag se 
    cout<<"size dekho kitna de raha hai fun call k andar diye"<<sizeof(a)/sizeof(a[0])<<endl;
    for(int i=0;i<n;i++){
        if(a[i]==target)
        return i;
    }
    return -1;
}
int main(){
    int a[]={1,23,21,45,221,80};
     cout<<"ye size int main wale a ka hai dekho yaha sahi hai "<<sizeof(a)/sizeof(a[0])<<endl;
   cout<< search(a,221,6);
   cout<<endl;
   cout<<"sizeof formule m size jo aati hai wo call hone k baad nahi sahi rahata data type ka size batata hai esi liye ham jab bhi fixed size wale array ko bheje to size bhi vbhej de ";
}