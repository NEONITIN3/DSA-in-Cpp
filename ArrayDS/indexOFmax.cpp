#include<bits/stdc++.h>
using namespace std;
//ab maan lo pata krna hai second maximum element index ??
// int second_maxelement_index(int a,int n){

// }
int main(){
    int a[]={1,23,4,21};
    //brut force method 0(N^2)
    //this is optimisez for max element
    int n=sizeof(a)/sizeof(a[0]); 
    //cout<<n;
    int max=0,sec_max=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[max])
        ///sec_max=max;
           max=i;
    }
     cout<<"index of max element -> "<<max <<" and elment is ->"<<a[max]<<endl;
     cout<<"second max index is "<<sec_max<<" element is "<<a[sec_max];
   return 0;

}