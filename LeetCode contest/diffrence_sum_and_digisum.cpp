/*
6291. Difference Between Element Sum and Digit Sum of an Array
You are given a positive integer array nums.

The element sum is the sum of all the elements in nums.
The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
Return the absolute difference between the element sum and digit sum of nums.

Note that the absolute difference between two integers x and y is defined as |x - y|.
*/
#include<bits/stdc++.h>
using namespace std;
    int differenceOfSum(vector<int>& nums) {
        //C++ vector SUM can be very easily done by std::accumulate method.
        int t=accumulate(nums.begin(),nums.end(),0);
        vector<int>v;
        for(int i=0;i<nums.size();i++){
              if(nums[i]<10)
              {
                  v.push_back(nums[i]);
              }
            else
                  while(nums[i]>10)
                  {
                 nums[i]= nums[i]%10;
                 v.push_back(nums[i]);  
                      nums[i]= nums[i]/10;
                  }             
                }
        return abs(t-accumulate(v.begin(),v.end(),0));
    }
int main(){
    vector<int>v={1,12,3,4};
    //t= 1+12+3+4 = 20
    //v= 1+1+2+3+4 = 11 //digit sum
    // |t-v| == |11-20| = 9
    cout<<differenceOfSum(v);
 
}   
