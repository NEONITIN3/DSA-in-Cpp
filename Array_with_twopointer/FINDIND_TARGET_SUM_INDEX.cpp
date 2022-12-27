//[1,0,3] target=4  o/p=[0,2] beacuse at0,2 we have 1+3 =4;
#include<bits/stdc++.h>
using namespace std;
//bruet force method 0(n^2)
int main(){
    int a[]={1,2,5,8,90,5,3};
    int size=sizeof(a)/sizeof(a[0]);
    int target=10;
    //int n=sizeof(a)/sizeof(a[0]);
     cout<<"all possible index which give target is "<<endl;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++)
        {
            if(a[i]+a[j]==target)
            //cout<<"all possible index which give target is "
          cout<<i<<" "<<j<<endl;
      
        }
    }
    // for(int i=0;i<2;i++){
    //     cout<<index[i]<<" ";
    // }
return -1;
}