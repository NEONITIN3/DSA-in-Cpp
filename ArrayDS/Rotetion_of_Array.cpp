#include<bits/stdc++.h>
using namespace std;
//rotet a array
/*
i/p= 10,3,5,7
0/p=7,5,3,10
*/
//by xor 
int rotation(int arr[],int n){
    int left =0,right=n-1;
    while(left<right){
        arr[left] ^= arr[right];
        arr[right] ^= arr[left];
        arr[left]  ^= arr[right];
        left++; //left wale ko aage le jao last wale ko kam karte jaao jab dono mil jayenge tab end ho jayega
        right--;
    }
       cout<<"after cycle rotation by xor "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}
int main()
{
    int a[]={12,34,56,22,123,55};
    int n=sizeof(a)/sizeof(a[0]);
    int left=0;
    int right=n-2;
    while(left<right)
    {
       int t=a[left];
       a[left]=a[right];
       a[right]=t;
       left++;
       right--;

    }
    cout<<"after cycle rotation "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
 cout<<endl;
    //rotaion by bit manipulation
    int b[]={10,20,70,30,40,50};
    int s=sizeof(b)/sizeof(b[0]); //size
    cout<<"by bit manipulation (with XOR) "<<rotation(b,s);
} 
// namespace std
