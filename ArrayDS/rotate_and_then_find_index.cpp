//leetcode Q no.33. Search in Rotated Sorted Array
#include<bits/stdc++.h>
using namespace std;

    int search(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            //(i+k)%n;  eASE MILEGA ROTED INDEX
             if (nums[i]==k)
                 return (i+k)%n;//ROTED INDEX PRINT KAR DENGE 
        }
        return -1;
       
    }

    int main(){
      vector<int>v={4,5,6,7,0,1,2};
       int target = 3; //esi 3 se rotat karna hai uske baad 3
       // ko search bhi karo rotetd array m kaha hau uska index print karn ahia
       // ROTED HONE K BAAD 0 1 2 4 5 6 7   //AB ESME TO 3 HAI NAHI TO -1 RETURN KAR DO
       cout<<search(v,target);
    }
