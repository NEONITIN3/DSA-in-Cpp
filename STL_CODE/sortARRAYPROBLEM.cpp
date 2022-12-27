#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n){
   
     for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
int main()
{ 
int arr[]={1,100,23,12,87,7,65,17};
int size=sizeof(arr)/sizeof(arr[0]);
//sorting in increasing order

 sort(arr,arr+size);
 //

for(int i=0;i<size;i++)
cout<<arr[i]<<" ";

//for sorting particular index range 12,87,7 ko solve karna hai to index 3 pe 12 hai last index
sort(arr+3,arr+size);
print(arr,size);

//sorting in decending order
/*
we using greater() function to sort in descing order 
*/
sort(arr,arr+size,greater());
cout<<"sorted in descending order"<<endl;
print(arr,size);
}  