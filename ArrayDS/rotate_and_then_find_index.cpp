//leetcode Q no.33. Search in Rotated Sorted Array
#include<bits/stdc++.h>
using namespace std;

    int search(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            int result=(i+k)%n;
             temp[result]=nums[i];
             if (nums[i]==k)
                 return result;
        }
        return -1;
        // nums=temp;
        // int s=0, last=n-1;
        // int mid=(s+(n-s))/2;
        // while(s<=last){
        // if(nums[mid]==k)
        //   return mid;
        // else if(nums[mid]>k)
        //   last=mid-1;
        //   else
        //     s=mid+1;
        // }
        // return -1;     
    }

    int main(){
      vector<int>v={4,5,6,7,0,1,2};
       int target = 4;
       cout<<search(v,target);
    }
