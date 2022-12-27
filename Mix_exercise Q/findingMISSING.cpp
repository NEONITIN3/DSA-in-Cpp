#include<bits/stdc++.h>
using namespace std;
/*
here you have a given number from 1 to n 
find the missing number;

1,2,3,4,6
0/p=5
simply we can do by sum of 1 to n and then subtract 
given number sum then only missing will remain n=n(n+1)/2
O(n)
*/

//2 method 
/*
we can do xor of given number and again all 1 to n number 
then both input xor 
diye gaye input ko 1to n number k sath xor karo jo missing hoga wahi bachega last me
0(1)
*/
int main(){
    //here n=9;
    int a[]={1,2,3,4,5,6,7,9}; //8 is missing
    int arr_xor=0;
    for(int i=0;i<8;i++){
        arr_xor=arr_xor^a[i];

    }
  int all_xor=0;
  for(int i=1;i<=9;i++)
  {
    all_xor=all_xor^i;
  }
//finaly take xor all combine
cout<<(arr_xor^all_xor);

}