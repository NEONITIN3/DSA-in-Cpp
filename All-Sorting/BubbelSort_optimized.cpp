// Further Optimization:
// The Time Complexity of Bubble Sort can be optimized for Best Case.i.e When all the elements of array
// are in sorted order, then there will be no swaps, So we can use it to identify whether our array is sorted
// or not.
// We can use a flag variable with initial value = 0,
// If in any pass, there is no swap, just break the loop and we will get sorted elements.
//already sorted hoga to only 0(n) other wise 0(n^2 )
#include<bits/stdc++.h>
using namespace std;

void bubbelsort(int a[], int n){
    bool flag = 0 ;
    for(int i = 0;i <n-1;i++){
       
        for(int j= 0;j<n-1-i;j++)
        { cout<<"pass  "<<i+1<<" ";
            if(a[j]>a[j+1]){
            int temp = a[j];
            a[j]= a[j+1];
            a[j+1]= temp;
            flag = 1;

            }           
       //for visulizationcout
               cout<<"pass  "<< i+1<<" "<<endl;
              for(int i =0 ;i<n; i++){
        cout<<a[i]<<" ";
        }
         cout<<endl;
            
    }
     cout<<endl;
       
        if (flag==0)
          break;
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