#include<bits/stdc++.h>
using namespace std;
void print_freq(int arr[],int n){
    int freq=1,i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<"for element "<<arr[i-1]<<"  frequency is -> "<<freq<<endl;
        i++;
        freq=1;//freq ko set kar do phir se initial value par
    }
    //agar ek hi element hai 
    if(n==1 || arr[n-1]!=arr[n-2])
            cout<<"for element "<<arr[i-1]<<"  frequency is -> "<<"1"<<endl;

}
int main()
{
    int a[]={10,23,23,45,45,78,90};//sorted array count frequency
    int n=sizeof(a)/sizeof(a[0]);
     print_freq(a,n);
}