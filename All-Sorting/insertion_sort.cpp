/*
Insertion Sort is another Comparison Based Sorting Algorithm.
It works as similar as the way we sort playing cards.i.e we have unsorted and sorted portions of
the cards, and we use to place the unsorted card in its correct position.
Insertion Sort works similar to that.
It is also inplace Sorting algorithm.
It is Stable Sorting Algorithm.
It can be useful when number of elements are very less.
It can be also useful when elements are in almost sorted order.

Insertion Sort is useful in Best Case Only : TC = O(N) {Best Case}
Total Comparisons : N-1 in Best Case
If Array is almost Sorted Insertion Sort will take O(N)
No of swaps = No of Inversions.
Worst Case of Insertion Sort can be when elements are in Descending Order.
Total Comparisons,swaps in Worst Case = 1+2+3+4+5+……..n-1 = O(n²)
Average Case (Half Ascending + Half Descending) = n/2 BC + n/2 WC = O(n²
*/


#include<bits/stdc++.h>
using namespace std;

void Insertionsort(int a[],int n){
    
}

void printa(int a[], int n){
  for(int i =0 ;i<n; i++){
        cout<<a[i]<<" ";
    }
}


int main(){
    int a[] = {2,1,5,3,88,33,21,7,90,6,433,22};
    int n = sizeof(a)/sizeof(int);
    printa(a,n);
    cout<<endl;
    cout<<"after sorting "<<endl;
   Insertionsort(a,n);
    printa(a,n);


return 0;
}