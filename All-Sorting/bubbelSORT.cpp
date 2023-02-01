/*
bubble sort m 
swapping calti hai har pass m
5 elemnt hai to 4 pass chalega har paas m do do elment array k compar e ho k swap honge 
if a[i+1]<a[i] then swaping hogi
jab n-1 pass chal jayega tab all element swap ho chuke honge
but some time 
kuchh pass remaining hote hai  tabhi sare element sorted ho chuke hote hai
es cas eme hame baki k abche pass ko nahi chalana hai esko pata karne k liye ek flag lellenge
agar kise bhi pass m koi swapping nahi hue to eska matlab sare elment sorte hai au rbaki k bache swapp ko 
nahi chalana padega
esase  timple complexity reduced ho jayegi




Bubble Sort:
Bubble Sort is a comparison based Sorting Algorithm.
It works by checking its adjacent element whether, it is in sorted order or not.
It is an Inplace Sorting algorithm as we don’t need any extra data structure while sorting.
It is stable (the sequence of repeating elements does not change).


No of Required Passes = (n-1)
Total Comparisons = (n-1) + (n-2) + (n-3) + .............1 = ( (n-1) * n )/2 = O(n2) { Every Case}
Total Swaps :
minimum = 0 {elements are in sorted order}

maximum = (n-1) + (n-2) + (n-3) + .............1 = ( (n-1) * n )/2 = O(n2)

Time Complexity = maximum(Comparison, Swaps)

= O(n2) {Every Case}

Space Complexity : O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void bubbelsort(int a[],int n){
    for(int i =0 ;i<n-1; i++)//pass
    {
        for(int j= 0;j<n-1-i;j++)
        {   if(a[j]>a[j+1]) //then swaping need
               {
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
               }
               //for visulizationcout
               cout<<"pass  "<< i+1<<" "<<endl;
              for(int i =0 ;i<n; i++){
        cout<<a[i]<<" ";
        }
         cout<<endl;
            
    }
     cout<<endl;
    }
}

void printa(int a[], int n){
  for(int i =0 ;i<n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(int);
    printa(a,n);
    cout<<endl;
    cout<<"after sorting "<<endl;
    bubbelsort(a,n);
    printa(a,n);


return 0;
}