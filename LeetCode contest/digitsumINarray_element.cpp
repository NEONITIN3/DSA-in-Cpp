#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>v={1,15,6,3};
     vector<int>v1;
     v1=v;
     vector<int>v2;
      for(int i=0;i<v.size();i++){
        if(v[i]<10)
        v2.push_back(v[i]);
        else
            {  
                while (v[i]>0)
            {
                v2.push_back(v[i]%10);
                v[i]=v[i]/10;
            }
            }

      }
      cout<<accumulate(v1.begin(),v1.end(),0);
      // - accumulate(v2.begin(),v2.end(),0));

    // if(nums[i]>10)
    //               {
    //                 if(nums[i]>)
    //              nums[i]= nums[i]%10;
    //              v1.push_back(nums[i]);  
    //                   nums[i]= nums[i]/10;
    //               }

}