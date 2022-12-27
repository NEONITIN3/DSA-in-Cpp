#include<bits/stdc++.h>
using namespace std;
//hame last wala index print karna hai target ka to bas index last se start kar do
int lastindexoftarget(int arr[],int index,int size,int target){
    if(index==size)//base case and its also handel that target is not in array
     return -1;
     if(arr[index]==target){
      return index ;
     }
    lastindexoftarget(arr,index-1,size,target);
}
int main(){
    int arr[]={1,4,8,3,2,4,5,4,2,5,1,2,4};
    int size=13;
    int target=2;
 cout<<lastindexoftarget(arr,size-1,size,target);
    return 0;
}
  