#include<bits/stdc++.h>
using namespace std;
//printing all prime number ;

int printarray(int arr[],int index,int size){
  if(index==size) return 0;
  cout<< arr[index]<<" ";
 printarray(arr,index+1,size);
}

int main(){
  int arr[]={1,2,3,5,6,2,5,9,5};
  int size=9;
   printarray(arr,0,size);
   return 0;
  }
