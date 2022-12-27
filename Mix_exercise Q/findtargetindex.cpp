#include<bits/stdc++.h>
using namespace std;
// find target index after sorting
int findallindexoftarget(int arr[],int size,int target){
           for(int i=0;i<size;i++)
           {
               if(arr[i]==target){
                    cout<<i<<" ";
               }

           }
           return -1;
}



int main(){
    int arr[]={3,4,8,5,6,8,2,90};
    int s=sizeof(arr)/sizeof(int); //length of arr;
    sort(arr,arr+s);
    //   for(int i=0;i<s;i++)
    //        {cout<<arr[i]<<" ";} // sorting array
    int target= 8;
findallindexoftarget(arr,s,target);
}
