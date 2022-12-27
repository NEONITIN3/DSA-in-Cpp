#include<bits/stdc++.h>
using namespace std;

void allindexoftarget(int arr[],int index,int size,int target){
    if(index==size)//base case and its also handel that target is not in array
     return ;
     if(arr[index]==target){
      cout<< index <<" ";
     }
    allindexoftarget(arr,index+1,size,target);
}
int main(){
    int arr[]={1,4,8,3,2,4,5,4,2,5,1,2,4};
    int size=13;
    int target=2;
 allindexoftarget(arr,0,size,target);
    return 0;
}
  