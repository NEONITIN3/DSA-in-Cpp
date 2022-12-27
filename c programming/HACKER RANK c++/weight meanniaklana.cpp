#include <stdio.h>


#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,k,a[100],w[100],s=0,wsum=0;
    float mw;
    //printf("size of ayyar inetr karto bsdk")
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
   // printf("\n");
for(i=0;i<n;i++)
    {
    scanf("%d",&w[i]);
    }
     // printf("\n");
 for(i=0;i<n;i++)
 {
  s+=(a[i]*w[i]);
  wsum+=w[i];
  mw=s/wsum;
 }
 printf("%..1f",mw);//dasmalaw k ek ank tak hi jayega
     
	 return 0;
}

