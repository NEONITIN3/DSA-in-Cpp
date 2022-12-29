#include<bits/stdc++.h>
using namespace std;
//ab maan lo pata krna hai second maximum element index ??


int largest_index(int a[],int n)
{
    int max=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[max])
            max=i;
    }
    return max;
}


 int second_maxelement_index(int a[],int n)
 {
  int larg=largest_index(a,n);
  int sec_largest=-1;
  //agar sare elemet same hai to kewal max milega sec max to hoga nahi to -1 return kar do
  for(int i=0;i<n;i++)
  {

    if(a[i]!=a[larg])// larg wale ko chhod kar sabhi ko test karna hai na ki kaun sec max hai
    {
          if(sec_largest==-1) 
          sec_largest=i; //ab second largest i ho gaya 
          else if (a[i]>a[sec_largest]) //sec-largest !=-1 hai tab ye update karega sec_largest k index ko
          sec_largest=i;
    }
    
  }
  return sec_largest;
 } 





//but it is not optimisez yaha two times traversal ho raha hai ...
//ek great wal ek liye phir sec large k liye

//**************Optimized******************//

int sec_Largest(int a[], int n){
    int result = -1 ,largest=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[largest])
        {
            result = largest;
            largest = i;
        }
        else if(a[i]!=a[largest]){
            if(result==-1 || a[i]>a[result])
            result=i;
        }
    }
    return result;
}


int main()
{
  int a[]={12,23,45,1,2,95,909,4};
  int n=8;
  cout<<"second largest element index  "<<second_maxelement_index(a,n)<<endl;
  cout<<"optimized solution approach ans " <<sec_Largest(a,n)<<endl;
}



